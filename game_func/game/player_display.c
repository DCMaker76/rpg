/*
** EPITECH PROJECT, 2020
** player_display
** File description:
** player_display
*/

#include "rpg.h"
#include "player.h"
#include "player_size.h"

void test_arrows_game(int spritepos)
{
    sfVector2i pos;
    sfVector2f sprite;

    pos = sfMouse_getPositionRenderWindow(handle_window);
    sprite = sfSprite_getPosition(pl.sp[spritepos]);
    if (pos.y < sprite.y + 100 && pos.y > sprite.y
    && pos.x < sprite.x + 350 && pos.x > sprite.x) {
        sfSprite_setPosition(hdl_arrow.sp[spritepos],
        (sfVector2f){plsizex[spritepos], plsizey[spritepos]});
        sfRenderWindow_drawSprite(handle_window,
        hdl_arrow.sp[spritepos], NULL);
        sfRenderWindow_drawText(handle_window, pl.texts[spritepos], NULL);
    } else {
        sfRenderWindow_drawSprite(handle_window,
        pl.sp[spritepos], NULL);
        sfRenderWindow_drawText(handle_window, pl.texts[spritepos], NULL);
    }
}

void move_sprite(sfIntRect *rect, int offset, int max_value)
{
    rect->left = (rect->left + offset);
    if (rect->left >= max_value)
        rect->left = 0;
}

sfIntRect clock_player(sfIntRect rect_player, int size)
{
    float seconds;

    time = sfClock_getElapsedTime(clock);
    seconds = time.microseconds / 1000000.0;
    if (seconds > 0.22) {
        move_sprite(&rect_player, 16, size);
        sfClock_restart(clock);
    }
    return (rect_player);
}

void player_choose_display(void)
{
    sfRenderWindow_clear(handle_window, sfBlack);
    for (int i = 0; i <= 5; i++) {
        sfText_setString(pl.texts[i], player_txt[i]);
        sfText_setCharacterSize(pl.texts[i], sizeptxt[i]);
        sfText_setPosition(pl.texts[i],
        (sfVector2f){pltxsizex[i], pltxsizey[i]});
        sfSprite_setPosition(pl.sp[i],
        (sfVector2f){plsizex[i], plsizey[i]});
        if (i > 2) {
            sfSprite_setTextureRect(pl.sp[i], rect);
            sfSprite_setScale(pl.sp[i], (sfVector2f){4, 4});
        }
        test_arrows_game(1);
        test_arrows_game(2);
        if (i != 1 || i != 2) {
            sfRenderWindow_drawSprite(handle_window, pl.sp[i], NULL);
            sfRenderWindow_drawText(handle_window, pl.texts[i], NULL);
        }
    }
    sfRenderWindow_display(handle_window);
}
/*
** EPITECH PROJECT, 2020
** player engine
** File description:
** player engine
*/

#include "basic.h"
#include "player.h"
#include "link_player.h"

void test_game(int spritepos)
{
    if (spritepos == 1)
        states.game_states = 1;
    if (spritepos == 2) {
        states.game_states = 0;
        states.display_states = 0;
    }
}

void test_mouse_game(int spritepos, int x, int x1)
{
    sfVector2i pos;
    sfVector2f sprite;

    if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        pos = sfMouse_getPositionRenderWindow(handle_window);
        sprite = sfSprite_getPosition(pl.sp[spritepos]);
        if (pos.y < sprite.y + x && pos.y > sprite.y
        && pos.x < sprite.x + x1 && pos.x > sprite.x)
            test_game(spritepos);
    }
}

player_choose_t player_engine(void)
{
    pl.tx = malloc(sizeof(sfTexture*) * 6 + 1);
    pl.sp = malloc(sizeof(sfSprite*) * 6 + 1);
    pl.texts = malloc(sizeof(sfText *) * 6 + 1);
    for (int i = 0; i <= 5; i++) {
        pl.tx[i] = sfTexture_createFromFile(playertx[i], NULL);
        pl.sp[i] = sfSprite_create();
        pl.texts[i] = sfText_create();
        sfText_setFont(pl.texts[i], font);
        sfSprite_setTexture(pl.sp[i], pl.tx[i], sfTrue);
    }
    return pl;
}
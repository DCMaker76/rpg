/*
** EPITECH PROJECT, 2020
** handle display
** File description:
** handle display
*/

#include "rpg.h"
#include "text.h"
#include "sizesprite.h"
#include "sizetext.h"

void test_circlebutton2_sett(void)
{
    if (settings.circle2_button == 0) {
        sfSprite_setPosition(settings.sp[9],
        (sfVector2f){sizesetx[9], sizesety[9]});
        sfRenderWindow_drawSprite(handle_window,
        settings.sp[9], NULL);
    } else if (settings.circle2_button == 1) {
        sfSprite_setPosition(cirbutt.sp[0],
        (sfVector2f){sizesetx[9], sizesety[9]});
        sfRenderWindow_drawSprite(handle_window,
        cirbutt.sp[0], NULL);
    }
}

void test_circlebutton_sett(void)
{
    if (settings.circle_button == 0) {
        sfSprite_setPosition(cirbutt.sp[1],
        (sfVector2f){sizesetx[8], sizesety[8]});
        sfRenderWindow_drawSprite(handle_window,
        cirbutt.sp[1], NULL);
    } else if (settings.circle_button == 1) {
        sfSprite_setPosition(cirbutt.sp[0],
        (sfVector2f){sizesetx[8], sizesety[8]});
        sfRenderWindow_drawSprite(handle_window,
        cirbutt.sp[0], NULL);
    }
}

void settings_display(void)
{
    sfRenderWindow_clear(handle_window, sfWhite);
    for (int i = 0; i <= 9; i++) {
        sfSprite_setPosition(settings.sp[i],
        (sfVector2f){sizesetx[i], sizesety[i]});
        test_arrows_sett(2);
        test_arrows_sett(3);
        test_circlebutton_sett();
        test_circlebutton2_sett();
        if (i != 2 && i != 3 && i != 8 && i != 9)
            sfRenderWindow_drawSprite(handle_window, settings.sp[i], NULL);
    }
    for (int i = 0; i <= 6; i++) {
        sfText_setString(settings.texts[i], settxt[i]);
        sfText_setCharacterSize(settings.texts[i], sizesettxt[i]);
        sfText_setPosition(settings.texts[i],
        (sfVector2f){sizestxt[i], sizestyt[i]});
        sfRenderWindow_drawText(handle_window, settings.texts[i], NULL);
    }
    sfRenderWindow_display(handle_window);
}

void handle_display(handle_t handle_sprite)
{
    sfRenderWindow_clear(handle_window, sfWhite);
    for (int i = 0; i <= 3; i++) {
            sfSprite_setPosition(handle_sprite.sp[i],
            (sfVector2f){sizex[i], sizey[i]});
            sfSprite_setPosition(hdl_arrow.sp[i],
            (sfVector2f){sizex[i], sizey[i]});
            test_arrows(i, handle_sprite);
    }
    for (int i = 0; i <= 3; i++) {
        sfText_setString(handle_sprite.texts[i], txt[i]);
        sfText_setCharacterSize(handle_sprite.texts[i], sizeltxt[i]);
        sfText_setPosition(handle_sprite.texts[i],
        (sfVector2f){sizetxt[i], sizetyt[i]});
        sfRenderWindow_drawText(handle_window, handle_sprite.texts[i], NULL);
    }
    sfRenderWindow_display(handle_window);
}


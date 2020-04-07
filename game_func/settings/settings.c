/*
** EPITECH PROJECT, 2020
** settings
** File description:
** settings
*/

#include "rpg.h"
#include "sizesprite.h"

void sound_test(sfVector2i mouse)
{
    if (mouse.x >= 750 && mouse.x < 780) {
        sfSprite_setScale(settings.sp[7], (sfVector2f){0, 1});
    }if (mouse.x >= 780 && mouse.x < 800) {
        sfSprite_setScale(settings.sp[7], (sfVector2f){0.1, 1});
    }if (mouse.x >= 800 && mouse.x < 850) {
        sfSprite_setScale(settings.sp[7], (sfVector2f){0.2, 1});
    }if (mouse.x >= 850 && mouse.x < 900) {
        sfSprite_setScale(settings.sp[7], (sfVector2f){0.3, 1});
    }if (mouse.x >= 900 && mouse.x < 950) {
        sfSprite_setScale(settings.sp[7], (sfVector2f){0.4, 1});
    }if (mouse.x >= 950 && mouse.x < 1000) {
        sfSprite_setScale(settings.sp[7], (sfVector2f){0.5, 1});
    }if (mouse.x >= 1000 && mouse.x < 1050) {
        sfSprite_setScale(settings.sp[7], (sfVector2f){0.6, 1});
    }if (mouse.x >= 1050 && mouse.x < 1150) {
        sfSprite_setScale(settings.sp[7], (sfVector2f){0.7, 1});
    }if (mouse.x >= 1150 && mouse.x < 1180) {
        sfSprite_setScale(settings.sp[7], (sfVector2f){0.8, 1});
    }if (mouse.x >= 1180 && mouse.x < 1190) {
        sfSprite_setScale(settings.sp[7], (sfVector2f){0.9, 1});
    }if (mouse.x >= 1190 && mouse.x <= 1200) {
        sfSprite_setScale(settings.sp[7], (sfVector2f){1, 1});
    }
}

void music_test(sfVector2i mouse)
{
    if (mouse.x >= 750 && mouse.x < 780) {
        sfSprite_setScale(settings.sp[6], (sfVector2f){0, 1});
        sfMusic_setVolume(music, 0);
    }if (mouse.x >= 780 && mouse.x < 800) {
        sfSprite_setScale(settings.sp[6], (sfVector2f){0.1, 1});
        sfMusic_setVolume(music, 10);
    }if (mouse.x >= 800 && mouse.x < 850) {
        sfSprite_setScale(settings.sp[6], (sfVector2f){0.2, 1});
        sfMusic_setVolume(music, 20);
    }if (mouse.x >= 850 && mouse.x < 900) {
        sfSprite_setScale(settings.sp[6], (sfVector2f){0.3, 1});
        sfMusic_setVolume(music, 30);
    }if (mouse.x >= 900 && mouse.x < 950) {
        sfSprite_setScale(settings.sp[6], (sfVector2f){0.4, 1});
        sfMusic_setVolume(music, 40);
    }if (mouse.x >= 950 && mouse.x < 1000) {
        sfSprite_setScale(settings.sp[6], (sfVector2f){0.5, 1});
        sfMusic_setVolume(music, 50);
    }if (mouse.x >= 1000 && mouse.x < 1050) {
        sfSprite_setScale(settings.sp[6], (sfVector2f){0.6, 1});
        sfMusic_setVolume(music, 60);
    }if (mouse.x >= 1050 && mouse.x < 1150) {
        sfSprite_setScale(settings.sp[6], (sfVector2f){0.7, 1});
        sfMusic_setVolume(music, 70);
    }if (mouse.x >= 1150 && mouse.x < 1180) {
        sfSprite_setScale(settings.sp[6], (sfVector2f){0.8, 1});
        sfMusic_setVolume(music, 80);
    }if (mouse.x >= 1180 && mouse.x < 1190) {
        sfSprite_setScale(settings.sp[6], (sfVector2f){0.9, 1});
        sfMusic_setVolume(music, 90);
    }if (mouse.x >= 1190 && mouse.x <= 1200) {
        sfMusic_setVolume(music, 100);
        sfSprite_setScale(settings.sp[6], (sfVector2f){1, 1});
    }
}

void test_arrows_sett(int spritepos)
{
    sfVector2i pos;
    sfVector2f sprite;

    pos = sfMouse_getPositionRenderWindow(handle_window);
    sprite = sfSprite_getPosition(settings.sp[spritepos]);
    if (pos.y < sprite.y + 100 && pos.y > sprite.y
    && pos.x < sprite.x + 350 && pos.x > sprite.x) {
        sfSprite_setPosition(hdl_arrow.sp[spritepos],
        (sfVector2f){sizesetx[spritepos], sizesety[spritepos]});
        sfRenderWindow_drawSprite(handle_window,
        hdl_arrow.sp[spritepos], NULL);
    } else
        sfRenderWindow_drawSprite(handle_window,
        settings.sp[spritepos], NULL);
}

void musicbar(void)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(handle_window);

    if (mouse.x >= 750 && mouse.x <= 1200) {
        if (mouse.y >= 300 && mouse.y <= 333)
            music_test(mouse);
        if (mouse.y >= 400 && mouse.y <= 433)
            sound_test(mouse);
    }
}
/*
** EPITECH PROJECT, 2020
** mouse
** File description:
** mouse
*/

#include "rpg.h"
#include "basic.h"

void test_arrows(int spritepos, handle_t handle_sprite)
{
    sfVector2i pos;
    sfVector2f sprite;

    pos = sfMouse_getPositionRenderWindow(handle_window);
    sprite = sfSprite_getPosition(handle.sp[spritepos]);
    if (pos.y < sprite.y + 100 && pos.y > sprite.y
    && pos.x < sprite.x + 350 && pos.x > sprite.x) {
        sfRenderWindow_drawSprite(handle_window,
        hdl_arrow.sp[spritepos], NULL);
    } else
        sfRenderWindow_drawSprite(handle_window,
        handle_sprite.sp[spritepos], NULL);
}

void test_button_sett(int spritepos)
{
    if (spritepos == 2)
        states.display_states = 0;
    if (spritepos == 3) {
        sfSprite_setScale(settings.sp[6],
        (sfVector2f){(settings.musicvolume / 100), 1});
        sfMusic_setVolume(music, settings.musicvolume);
        states.display_states = 0;
    } if (spritepos == 8) {
        if (settings.circle_button == 0)
            settings.circle_button = 1;
        else if (settings.circle_button == 1)
            settings.circle_button = 0;
    } if (spritepos == 9) {
        if (settings.circle2_button == 0)
            settings.circle2_button = 1;
        else if (settings.circle2_button == 1)
            settings.circle2_button = 0;
    }
}

void test_button(int spritepos)
{
    if (spritepos == 1) {
        states.display_states = 2;
        states.game_states = 0;
    } if (spritepos == 2) {
        settings.musicvolume = sfMusic_getVolume(music);
        states.display_states = 1;
    }
    if (spritepos == 3)
        sfRenderWindow_close(handle_window);
}

void test_mouse(int spritepos, int x, int x1)
{
    sfVector2i pos;
    sfVector2f sprite;

    if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        pos = sfMouse_getPositionRenderWindow(handle_window);
        sprite = sfSprite_getPosition(handle.sp[spritepos]);
        if (pos.y < sprite.y + x && pos.y > sprite.y
        && pos.x < sprite.x + x1 && pos.x > sprite.x) {
                test_button(spritepos);
        }
    }
}

void test_mouse_sett(int spritepos, int x, int x1)
{
    sfVector2i pos;
    sfVector2f sprite;

    if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        pos = sfMouse_getPositionRenderWindow(handle_window);
        sprite = sfSprite_getPosition(settings.sp[spritepos]);
        if (pos.y < sprite.y + x && pos.y > sprite.y
        && pos.x < sprite.x + x1 && pos.x > sprite.x) {
                test_button_sett(spritepos);
        }
    }
}
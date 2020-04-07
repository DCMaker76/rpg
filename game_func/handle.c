/*
** EPITECH PROJECT, 2020
** ahndle
** File description:
** hanlde
*/

#include "rpg.h"
#include "basic.h"

void eventclose(sfEvent event)
{
    if (event.type == sfEvtClosed)
        sfRenderWindow_close(handle_window);
    if (event.type == sfEvtKeyPressed) {
        if (sfKeyboard_isKeyPressed(sfKeyEscape)
        && states.display_states == 0)
            sfRenderWindow_close(handle_window);
        if (sfKeyboard_isKeyPressed(sfKeyEscape)
        && (states.display_states == 1 || states.display_states == 2))
            states.display_states = 0;
    }
}

void destroy(void)
{
    free(handle.sp);
    free(handle.tx);
    free(handle.texts);
    free(settings.sp);
    free(settings.tx);
    free(settings.texts);
    sfMusic_destroy(music);
    sfRenderWindow_destroy(handle_window);
}

void switch_display(handle_t handle_sprite)
{
    switch(states.display_states)
    {
        case hdle:
            handle_display(handle_sprite);
            break;
        case sett:
            settings_display();
            break;
        case gme:
            sfRenderWindow_clear(handle_window, sfRed);
            sfRenderWindow_display(handle_window);
            break;
        case ps_gme :
            break;
    }
}

void event_loop(sfEvent event)
{
    while (sfRenderWindow_pollEvent(handle_window, &event)) {
        eventclose(event);
        if (states.display_states == 0) {
            test_mouse(1, 100, 350);
            test_mouse(2, 100, 350);
            test_mouse(3, 100, 350);
        } if (states.display_states == 1) {
            if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue)
                musicbar();
            test_mouse_sett(2, 100, 350);
            test_mouse_sett(3, 100, 350);
            test_mouse_sett(8, 68, 68);
            test_mouse_sett(9, 68, 68);
        }
    }
}

void handle_play(void)
{
    handle_window = create_window(1920, 1080, 64);
    handle_t handle_sprite = initengine();
    hdl_arrow = initarrow();
    settings = settengine();
    sfEvent event;
    initmusic();
    cirbutt = settcircle();

    while (sfRenderWindow_isOpen(handle_window)) {
        event_loop(event);
        switch_display(handle_sprite);
    }
    destroy();
}
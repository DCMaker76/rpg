/*
** EPITECH PROJECT, 2020
** game
** File description:
** game
*/

#include "rpg.h"

void game_player_choose(void)
{
    switch(states.game_states)
    {
        case player_choose:
            sfRenderWindow_clear(handle_window, sfBlack);
            sfRenderWindow_display(handle_window);
            break;
        case map_charg:
            sfRenderWindow_clear(handle_window, sfBlue);
            sfRenderWindow_display(handle_window);
            break;
        case gmes:
            sfRenderWindow_clear(handle_window, sfRed);
            sfRenderWindow_display(handle_window);
            break;
        case ps_gme:
            sfRenderWindow_clear(handle_window, sfGreen);
            sfRenderWindow_display(handle_window);
            break;
    }
}
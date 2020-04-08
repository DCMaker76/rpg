/*
** EPITECH PROJECT, 2020
** player
** File description:
** player
*/

#ifndef player
#define player

#include "rpg.h"

typedef struct player_choose
{
    sfText **texts;
    sfTexture **tx;
    sfSprite **sp;
}player_choose_t;

player_choose_t pl;

typedef struct game
{
    sfTexture **tx;
    sfSprite **sp;
}game_t;

game_t game;

sfClock *clock;
sfTime time;

player_choose_t player_engine(void);
void player_choose_display(void);

#endif /* !player */

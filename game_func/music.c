/*
** EPITECH PROJECT, 2020
** music
** File description:
** music
*/

#include "rpg.h"

void initmusic(void)
{
    music = sfMusic_createFromFile("assets/music/handle.ogg");
    sfMusic_play(music);
    sfMusic_setLoop(music, 1);
}
/*
** EPITECH PROJECT, 2020
** engine
** File description:
** engine
*/

#ifndef engine
#define engine

#include <SFML/Graphics.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Window/Mouse.h>
#include <SFML/Audio.h>
#include <SFML/System.h>
#include <SFML/Window.h>

enum state_ingame
{
    player_choose,
    map_charg,
    gmes,
    ps_gme
};

enum state_game
{
    hdle,
    sett,
    gme,
};

typedef struct handle
{
    sfText **texts;
    sfTexture **tx;
    sfSprite **sp;
}handle_t;

typedef struct handle_arrow
{
    sfText **texts;
    sfTexture **tx;
    sfSprite **sp;
}handle_arrow_t;

handle_arrow_t hdl_arrow;

handle_t handle;

typedef struct settings_butt
{
    sfTexture **tx;
    sfSprite **sp;
}settings_butt_t;

settings_butt_t cirbutt;

typedef struct settings
{
    sfText **texts;
    sfTexture **tx;
    sfSprite **sp;
    sfBool circle_button;
    sfBool circle2_button;
    float musicvolume;
}settings_t;

settings_t settings;

typedef struct pause_game
{
    sfTexture **tx;
    sfSprite **sp;
}pause_t;

pause_t pause_game;

typedef struct states
{
    int display_states;
    int game_states;
}states_t;

states_t states;

sfIntRect rect;
sfFont *font;
sfMusic *music;

#endif /* !engine */

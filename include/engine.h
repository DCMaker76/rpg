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

enum state_game
{
    hdle,
    sett,
    gme,
    ps_gme
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

typedef struct game
{
    sfTexture **tx;
    sfSprite **sp;
}game_t;

game_t game;

typedef struct pause_game
{
    sfTexture **tx;
    sfSprite **sp;
}pause_t;

pause_t pause_game;

typedef struct states
{
    int display_states;
}states_t;

states_t states;

sfFont *font;
sfMusic *music;

#endif /* !engine */

/*
** EPITECH PROJECT, 2020
** rpg
** File description:
** rpg
*/

#ifndef rpg
#define rpg

#include "engine.h"
#include "player.h"


void game_player_choose(void);
sfRenderWindow *create_window(int width, int hight, int pixel);
sfRenderWindow *handle_window;
handle_t initengine(void);
handle_arrow_t initarrow(void);
settings_butt_t settcircle(void);
settings_t settengine(void);
sfIntRect clock_player(sfIntRect rect_player, int size);
void initmusic(void);
void settings_display(void);
void musicbar(void);
void test_arrows(int spritepos, handle_t handle_sprite);
void test_mouse_game(int spritepos, int x, int x1);
void test_mouse(int spritepos, int x, int x1);
void test_mouse_sett(int spritepos, int x, int x1);
void test_arrows_sett(int spritepos);
void handle_display(handle_t handle_sprite);

#endif /* !rpg */

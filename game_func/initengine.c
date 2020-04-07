/*
** EPITECH PROJECT, 2020
** init my engine
** File description:
** init my engine
*/

#include "engine.h"
#include "basic.h"
#include "assets_link.h"

settings_butt_t settcircle(void)
{
    cirbutt.tx = malloc(sizeof(sfTexture*) * 2 + 1);
    cirbutt.sp = malloc(sizeof(sfSprite*) * 2 + 1);
    for (int i = 0; i <= 1; i++) {
        cirbutt.tx[i] = sfTexture_createFromFile(sett_circle[i], NULL);
        cirbutt.sp[i] = sfSprite_create();
        sfSprite_setTexture(cirbutt.sp[i], cirbutt.tx[i], sfTrue);
    }
    return cirbutt;
}

settings_t settengine(void)
{
    settings.tx = malloc(sizeof(sfTexture*) * 10 + 1);
    settings.sp = malloc(sizeof(sfSprite*) * 10 + 1);
    settings.texts = malloc(sizeof(sfText *) * 7 + 1);
    for (int i = 0; i <= 9; i++) {
        settings.tx[i] = sfTexture_createFromFile(setts[i], NULL);
        settings.sp[i] = sfSprite_create();
        sfSprite_setTexture(settings.sp[i], settings.tx[i], sfTrue);
    }
    for (int i = 0; i <= 7; i++) {
        settings.texts[i] = sfText_create();
        sfText_setFont(settings.texts[i], font);
    }
    return settings;
}

handle_arrow_t initarrow(void)
{
    hdl_arrow.tx = malloc(sizeof(sfTexture*) * 3 + 1);
    hdl_arrow.sp = malloc(sizeof(sfSprite*) * 3 + 1);

    for (int i = 0; i <= 3; i++) {
        hdl_arrow.tx[i] = sfTexture_createFromFile(tx_arrow[i], NULL);
        hdl_arrow.sp[i] = sfSprite_create();
        sfSprite_setTexture(hdl_arrow.sp[i], hdl_arrow.tx[i], sfTrue);
    }

    return (hdl_arrow);
}

handle_t initengine(void)
{
    font = sfFont_createFromFile("assets/fonts/pixelart.ttf");
    handle.tx = malloc(sizeof(sfTexture*) * 3 + 1);
    handle.sp = malloc(sizeof(sfSprite*) * 3 + 1);
    handle.texts = malloc(sizeof(sfText *) * 4 + 1);

    for (int i = 0; i <= 3; i++) {
        handle.tx[i] = sfTexture_createFromFile(texture[i], NULL);
        handle.sp[i] = sfSprite_create();
        sfSprite_setTexture(handle.sp[i], handle.tx[i], sfTrue);
    }
    for (int i = 0; i <= 4; i++) {
        handle.texts[i] = sfText_create();
        sfText_setFont(handle.texts[i], font);
    }
    return (handle);
}


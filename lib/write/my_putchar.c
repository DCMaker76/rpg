/*
** EPITECH PROJECT, 2019
** myputchar
** File description:
** myputchar
*/

#include "basic.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

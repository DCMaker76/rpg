/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include "basic.h"

int main(int ac, char **av, char ** env)
{
    if (env[0] == NULL)
        return (84);
    if (ac != 1 && av[1] != NULL)
        return (84);
    handle_play();
    return (0);
}
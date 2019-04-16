/*
** EPITECH PROJECT, 2018
** Project 104intersection
** File description:
** 104intersection fonctions de gestoion d'erreur
*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "include/my.h"

void error(int ac, char **av)
{
    if (ac != 9)
        exit(84);
    if (atoi(av[1]) != 1 && atoi(av[1]) != 2 && atoi(av[1]) != 3)
        exit(84);
    if (atoi(av[5]) == 0 && atoi(av[6]) == 0 && atoi(av[7]) == 0)
        exit(84);
    if (atoi(av[1]) == 3 && atoi(av[8]) > 360)
        exit(84);
    if (atoi(av[1]) == 3 && atoi(av[8]) < 1)
        exit(84);
}

void nega_div(void)
{
    printf("There is an infinite number of intersection points.\n");
    exit(0);
}
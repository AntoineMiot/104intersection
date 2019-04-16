/*
** EPITECH PROJECT, 2018
** Project 104intersection
** File description:
** main fonction
*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "include/my.h"

void disp_coor_point_d_zero(float x_2, argument ar)
{
    printf("(%.3f,", ar.xp + x_2 * ar.xv);
    printf(" %.3f,", ar.yp + x_2 * ar.yv);
    printf(" %.3f)\n", ar.zp + x_2 * ar.zv);
}

void disp_coor_point_d_pos(float x_1, float x_2, argument ar)
{
    printf("(%.3f,", ar.xp + x_2 * ar.xv);
    printf(" %.3f,", ar.yp + x_2 * ar.yv);
    printf(" %.3f)\n", ar.zp + x_2 * ar.zv);
    printf("(%.3f,", ar.xp + x_1 * ar.xv);
    printf(" %.3f,", ar.yp + x_1 * ar.yv);
    printf(" %.3f)\n", ar.zp + x_1 * ar.zv);
}

void disp_usage(void)
{
    printf("USAGE\n");
    printf("	./104intersection opt xp yp zp xv yv zv p\n\n");
    printf("DESCRIPTION\n");
    printf("	opt		surface option: 1 for a sphere,");
    printf(" 2 for a cylinder,");
    printf(" 3 for a cone\n");
    printf("	(xp, yp, zp)	coordinates of a point by which the light");
    printf(" ray passes through\n");
    printf("	(xv, yv, zv)	coordinates of a vector parallel");
    printf(" to the light ray\n");
    printf("	p		parameter: radius of the sphere, radius");
    printf(" of the cylinder, or");
    printf(" angle formed by the cone and the Z-axis\n");
    exit(0);
}

void set_arg(argument *arg, char **av)
{
    arg->opt = atof(av[1]);
    arg->xp = atof(av[2]);
    arg->yp = atof(av[3]);
    arg->zp = atof(av[4]);
    arg->xv = atof(av[5]);
    arg->yv = atof(av[6]);
    arg->zv = atof(av[7]);
    arg->p = atof(av[8]);
}

int main(int ac, char **av)
{
    struct argument arg;
    if (ac == 1)
        return (84);
    if (av[1][0] == '-' && av[1][1] == 'h')
        disp_usage();
    error(ac, av);
    set_arg(&arg, av);
    if (av[1][0] == '1')
        sphere(arg);
    if (av[1][0] == '2')
        cylinder(arg);
    if (av[1][0] == '3')
        cone(arg);
    return (0);
}

/*
** EPITECH PROJECT, 2018
** Project 104intersection
** File description:
** 104intersection fonction de calcul
*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "include/my.h"

void delta_calc(float a, float b, float c, argument ar)
{
    float delta = pow(b, 2) - (4*a*c);
    float x_1;
    float x_2;

    if (a == 0)
        nega_div();
    if (delta < 0) {
        printf("No intersection point.\n");
    } else if (delta > 0) {
        x_1 = (-b - sqrtf(delta))/(2*a);
        x_2 = (-b + sqrtf(delta))/(2*a);
        printf("2 intersection point:\n");
        disp_coor_point_d_pos(x_1, x_2, ar);
    } else {
        x_1 = - b / (2 * a);
        printf("1 intersection point:\n");
        disp_coor_point_d_zero(x_1, ar);
    }
}

void sphere(argument ar)
{
    float a = powf(ar.xv, 2) + powf(ar.yv, 2) + powf(ar.zv, 2);
    float b = (2*ar.xp*ar.xv)+(2*ar.yp*ar.yv)+(2*ar.zp*ar.zv);
    float c = powf(ar.xp, 2) + powf(ar.yp, 2) + powf(ar.zp, 2) - powf(ar.p, 2);
    printf("Sphere of radius %.0f\n", ar.p);
    printf("Line passing through the point ");
    printf("(%.0f, %.0f, %.0f)", ar.xp, ar.yp, ar.zp);
    printf(" and parallel to the vector ");
    printf("(%.0f, %.0f, %.0f)\n", ar.xv, ar.yv, ar.zv);
    delta_calc(a, b, c, ar);
}

void cone(argument ar)
{
    float a = ar.xv*ar.xv + ar.yv*ar.yv - ar.zv*ar.zv
    * (tan(ar.p*M_PI / 180)*tan(ar.p*M_PI / 180));
    float b = (2 * ar.xp * ar.xv) + (2 * ar.yp * ar.yv)
    - (2 * ar.zp * ar.zv * (tan(ar.p*M_PI / 180)*tan(ar.p*M_PI / 180)));
    float c = ar.xp*ar.xp + ar.yp*ar.yp -
    (ar.zp*ar.zp * ((tan(ar.p*M_PI / 180)*tan(ar.p*M_PI / 180))));
    printf("Cone with a %.0f degree angle\n", ar.p);
    printf("Line passing through the point ");
    printf("(%.0f, %.0f, %.0f)", ar.xp, ar.yp, ar.zp);
    printf(" and parallel to the vector ");
    printf("(%.0f, %.0f, %.0f)\n", ar.xv, ar.yv, ar.zv);
    delta_calc(a, b, c, ar);
}

void cylinder(argument ar)
{
    float a = powf(ar.xv, 2) + powf(ar.yv, 2);
    float b = (2*ar.xp*ar.xv)+(2*ar.yp*ar.yv);
    float c = powf(ar.xp, 2) + powf(ar.yp, 2) - powf(ar.p, 2);
    printf("Cylinder of radius %.0f\n", ar.p);
    printf("Line passing through the point ");
    printf("(%.0f, %.0f, %.0f)", ar.xp, ar.yp, ar.zp);
    printf(" and parallel to the vector ");
    printf("(%.0f, %.0f, %.0f)\n", ar.xv, ar.yv, ar.zv);
    delta_calc(a, b, c, ar);
}
/*
** EPITECH PROJECT, 2018
** include functions
** File description:
** include functions
*/

struct argument{
    float opt;
    float xp;
    float yp;
    float zp;
    float xv;
    float yv;
    float zv;
    float p;
};

typedef struct argument argument;

char *my_getnbr(char *str);
void my_putstr(char const *str);
int my_strlen(char const *str);
int my_char_is_nb(char x);
char *my_str_isprintable(char *str);
void delta_calc(float a, float b, float c, argument ar);
void sphere(argument ar);
void cone(argument ar);
void cylinder(argument ar);
void error(int ac, char **av);
void disp_coor_point_d_zero(float x_2, argument ar);
void disp_coor_point_d_pos(float x_1, float x_2, argument ar);
void nega_div(void);
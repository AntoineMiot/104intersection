##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## 
##

SRC	=	main_intersection.c	\
		disp_error.c	\
		calc_abcd.c

OBJ		=	$(SRC:.c=.o)

NAME	=	104intersection

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -lm -o $(NAME) $(OBJ) -lm -I./include
	rm *.o

clean:
	rm -f $(OBJ)
	rm -f vgcore.*
	rm -f *.o

fclean:	clean
	rm -f $(NAME)

re:	fclean all

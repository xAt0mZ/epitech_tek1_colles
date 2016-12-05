##
## Makefile for minicut in /home/baron_l//local/rendu/projets/Colle/colle8
## 
## Made by louis-philippe baron
## Login   <baron_l@epitech.net>
## 
## Started on  Thu Jun 13 09:06:17 2013 louis-philippe baron
## Last update Thu Jun 13 11:43:47 2013 louis-philippe baron
##

SRC=		main.c \
		basics.c \
		get_next_line.c \
		my_str_to_wordtab.c \
		show_free.c \
		option_c.c \
		option_d.c \
		get_rows.c \
		check_args.c

OBJ=		$(SRC:.c=.o)

NAME=		minicut

CFLAGS=		-g -Wall -Wextra

all:		$(NAME)

$(NAME):	$(OBJ)
		cc -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all

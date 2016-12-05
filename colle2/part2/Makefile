##
## Makefile for Makefile in /home/mantez_p//calculator
## 
## Made by paul mantez
## Login   <mantez_p@epitech.net>
## 
## Started on  Tue Apr 30 09:06:57 2013 paul mantez
## Last update Tue Apr 30 11:43:23 2013 louis-philippe baron
##

CC =		gcc

NAME =		calculator

OBJS =		$(SRCS:.c=.o)

SRCS =		calcul.c \
		do_multi.c \
		do_add.c \
		fonction.c \
		free.c \
		main.c \
		my_str_to_wordtab.c \
		check_validity.c \
		get_exp.c \
		show.c

RM =		rm -f

CFLAGS=		-ansi -pedantic -g -Wall -Wextra

all:		$(NAME)

$(NAME):	$(OBJS)
		$(CC) -o $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all
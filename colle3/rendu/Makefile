##
## Makefile for Makefile in /home/mantez_p//mixword
## 
## Made by paul mantez
## Login   <mantez_p@epitech.net>
## 
## Started on  Tue May  7 09:08:43 2013 paul mantez
## Last update Tue May  7 13:05:24 2013 louis-philippe baron
##

CC =		gcc

NAME =		my_mixword

OBJS =		$(SRCS:.c=.o)

SRCS =		main.c \
		fonction.c \
		put_letter.c \
		check_grid.c \
		check_word.c \
		create.c \
		basics.c \
		check_file.c \
		check_params.c \
		get_file.c \
		get_next_line.c \
		show_free.c \
		my_open.c \
		loop.c \
		fill_grid.c \
		color_that.c \
		color_that_too.c

RM =		rm -f

all:		$(NAME)

$(NAME):	$(OBJS)
		$(CC) -o $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

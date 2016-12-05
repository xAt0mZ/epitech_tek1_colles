##
## Makefile for Makefile in /home/mantez_p//colle7
## 
## Made by paul mantez
## Login   <mantez_p@epitech.net>
## 
## Started on  Tue Jun  4 09:10:13 2013 paul mantez
## Last update Tue Jun  4 12:22:40 2013 louis-philippe baron
##

SRCS =		main.c \
		basics.c \
		check_buffer.c \
		check_option.c \
		check_victory.c \
		color.c \
		define_starter.c \
		draw.c \
		ia.c \
		ia2.c \
		is_tab_full.c \
		play.c \
		put_victory.c \
		show_tab.c \
		show_last.c

OBJS =		$(SRCS:.c=.o)

NAME =		my_morpion

CFLAGS=		-g -Wall -Wextra

CC =		gcc

RM =		rm -f

all:		$(NAME)

$(NAME):	$(OBJS)
		$(CC) -o $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

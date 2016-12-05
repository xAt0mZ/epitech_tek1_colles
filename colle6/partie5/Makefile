##
## Makefile for text_count in /home/baron_l//local/rendu/projets/Colle/colle6
## 
## Made by louis-philippe baron
## Login   <baron_l@epitech.net>
## 
## Started on  Tue May 28 09:27:19 2013 louis-philippe baron
## Last update Tue May 28 12:53:39 2013 louis-philippe baron
##

SRC=		main.c \
		basics.c \
		basics2.c \
		print.c \
		check_args.c \
		get_next_line.c \
		statistic.c

OBJ=		$(SRC:.c=.o)

NAME=		text_count

all:		$(NAME)

$(NAME):	$(OBJ)
		cc -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all

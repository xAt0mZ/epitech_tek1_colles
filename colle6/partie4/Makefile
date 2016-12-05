##
## Makefile for text_count in /home/baron_l//local/rendu/projets/Colle/colle6
## 
## Made by louis-philippe baron
## Login   <baron_l@epitech.net>
## 
## Started on  Tue May 28 09:27:19 2013 louis-philippe baron
## Last update Tue May 28 10:27:22 2013 louis-philippe baron
##

SRC=		main.c \
		basics.c \
		basics2.c \
		print.c

OBJ=		$(SRC:.c=.o)

CFLAGS=		-Wall -Wextra

NAME=		text_count

all:		$(NAME)

$(NAME):	$(OBJ)
		cc -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all

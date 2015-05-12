##
## Makefile for Bistro in /home/Sorikairo/rendu/Bistro
## 
## Made by CRUVEILHER Thomas
## Login   <cruvei_t@epitech.net>
## 
## Started on  Sun Nov 10 20:35:28 2013 CRUVEILHER Thomas
## Last update Sun Feb 16 07:23:11 2014 CRUVEILHER Thomas
##

NAME	=	allum1

SOURCE	=	./Sources/

SRC	=	hard_game/h_alum1.c \
		hard_game/h_ia.c \
		hard_game/h_plateau.c \
		hard_game/h_rockpaper.c \
		hard_game/h_tactic.c \
		easy_game/board.c \
		easy_game/human.c \
		easy_game/ia.c \
		easy_game/main.c \
		my_atoi.c

FLAGS	=	 -ansi -pedantic -Wall -Werror -Wextra -I./

CC	=	cc -g -o

LIB	=	-lmy -L./

all:		$(NAME)

$(NAME):
	$(CC) $(NAME) $(FLAGS) $(SRC) $(LIB)
clean:
	rm $(NAME)

fclean: clean

re:	clean all

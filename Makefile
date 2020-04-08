##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## makefile
##

NAME	= my_rpg

CC	= gcc

RM	= rm -f

SRCS	= ./game_func/display/handle_display.c \
	  ./game_func/display/game.c \
	  ./game_func/game/player_engine.c \
	  ./game_func/game/player_display.c \
	  ./game_func/settings/settings.c \
	  ./game_func/handle.c \
	  ./game_func/mouse.c \
	  ./game_func/music.c \
	  ./game_func/initengine.c \
	  ./game_func/window.c \
	  ./lib/write/my_putchar.c \
	  ./lib/write/write_error.c \
	  ./src/main.c

OBJS	= $(SRCS:.c=.o)

CPPFLAGS = -I ./include/
CFLAGS += -Wall -Wextra -l csfml-graphics -l csfml-system -l csfml-window -l csfml-audio -lm

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME) $(CPPFLAGS) $(CFLAGS)
	 $(RM) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

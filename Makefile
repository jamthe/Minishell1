##
## Makefile for Makefile in /home/elbouh_j/PSU_2014_minishell1
## 
## Made by jamal elbouhali
## Login   <elbouh_j@epitech.net>
## 
## Started on  Wed Jan 21 13:27:58 2015 jamal elbouhali
## Last update Sun Feb  1 23:38:00 2015 jamal elbouhali
##

CC	= gcc

RM	= rm -f

CFLAGS	+= -Wextra -Wall -Werror
CFLAGS	+= -I.

NAME	= mysh

SRCS	= main.c \
	  my_get_env.c \
	  my_str.c \
	  my_str2.c \
	  builtin.c \
	  fbuiltin.c \
	  show.c \
	  wordtab.c \
	  my_xy_tab.c \
	  exec.c 


OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

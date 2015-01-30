##
## Makefile for Makefile in /home/elbouh_j/PSU_2014_minishell1
## 
## Made by jamal elbouhali
## Login   <elbouh_j@epitech.net>
## 
## Started on  Wed Jan 21 13:27:58 2015 jamal elbouhali
## Last update Fri Jan 30 19:11:25 2015 jamal elbouhali
##

CC	= gcc

RM	= rm -f

#CFLAGS	+= -Wextra -Wall #-Werror
CFLAGS	+= -ansi -pedantic
CFLAGS	+= -I.

NAME	= mysh

SRCS	= main.c \
	  my_get_env.c \
	  my_str.c \
	  my_str2.c \
	  builtin.c \
	  fbuiltin.c \
	  my_wtcpy.c \
	  exec.c \
	  init.c \
	  show.c \
	  wordtab.c \
	  wordtab2.c 

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

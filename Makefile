##
## Makefile for Makefile in /home/elbouh_j/PSU_2014_minishell1
## 
## Made by jamal elbouhali
## Login   <elbouh_j@epitech.net>
## 
## Started on  Wed Jan 21 13:27:58 2015 jamal elbouhali
## Last update Wed Jan 28 13:39:43 2015 jamal elbouhali
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
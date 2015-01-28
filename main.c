/*
** main.c for main in /home/elbouh_j/PSU_2014_minishell1
** 
** Made by jamal elbouhali
** Login   <elbouh_j@epitech.net>
** 
** Started on  Mon Jan 19 21:34:51 2015 jamal elbouhali
** Last update Wed Jan 28 14:02:30 2015 jamal elbouhali
*/

#include <stdlib.h>
#include "my.h"
#include <unistd.h>
#include <stdio.h>

int	main(int ac, char **av, char **env)
{
  char	**env2;
  char	*buf;

  env2 = env;
  my_putstr("welcome\n\n\n\n");
  while (42)
    {
      my_putstr("$> ");
      if ((read(0, buf, 4096)) == -1)
	return (1);
      if (check_builtin(buf) == 1)
	check_exec(buf);
    }
  return (0);
}

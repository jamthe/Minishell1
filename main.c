/*
** main.c for main in /home/elbouh_j/PSU_2014_minishell1
** 
** Made by jamal elbouhali
** Login   <elbouh_j@epitech.net>
** 
** Started on  Mon Jan 19 21:34:51 2015 jamal elbouhali
** Last update Fri Jan 30 14:59:07 2015 jamal elbouhali
*/

#include <stdlib.h>
#include "my.h"
#include <unistd.h>
#include <stdio.h>

int	main(int ac, char **av, char **env)
{
  char	**env2;
  char	buf[4096];
  int	i;

  env2 = wtcpy(env);
  my_putstr("$> ");
  while ((i = read(0, buf, 4096)) > 0)
    {
      buf[i] = 0;
      check_builtin(buf);
      check_exec(buf);
      my_putstr("$> ");
    }
  return (0);
}

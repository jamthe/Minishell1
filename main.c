/*
** main.c for main in /home/elbouh_j/PSU_2014_minishell1
** 
** Made by jamal elbouhali
** Login   <elbouh_j@epitech.net>
** 
** Started on  Mon Jan 19 21:34:51 2015 jamal elbouhali
** Last update Tue Jan 27 19:11:18 2015 jamal elbouhali
*/

#include <stdlib.h>
#include "my.h"
#include <unistd.h>

int	main(int ac, char **av, char **env)
{
  char	**env2;
  char	*buf;

  env2 = env;
  while (42)
    {
      my_putstr("$> ");
      if ((read(0, buf, 4096)) == -1)
	return (1);
      check_builtin(env, buf);
    }
  return (0);
}

/*
** main.c for main in /home/elbouh_j/PSU_2014_minishell1
** 
** Made by jamal elbouhali
** Login   <elbouh_j@epitech.net>
** 
** Started on  Mon Jan 19 21:34:51 2015 jamal elbouhali
** Last update Sun Feb  1 12:16:42 2015 jamal elbouhali
*/

#include <stdlib.h>
#include "my.h"
#include <unistd.h>
#include <stdio.h>

char	**get_path(char **env)
{
  char	*str;

  str = my_getenv("PATH=", env);
  return (str_wordtab(str, ':'));
}

int	main(int ac, char **av, char **env)
{
  char	**env2;
  char	buf[4096];
  int	i;
  char	**path;
  char	**comm;

  if (env[0] != NULL)
    {
      env2 = wtcpy(env);
      path = get_path(env2);
    }
  my_putstr("$> ");
  while ((i = read(0, buf, 4096)) > 0)
    {
      if (env[0] == NULL)
	return (1);
      else
	{
	  buf[i] = 0;
	  comm = str_wordtab(buf, ' ');
	  if (check_builtin(buf) == 1)
	    check_exec(comm, path, env2);
	  my_putstr("$> ");
	}
    }
  return (0);
}

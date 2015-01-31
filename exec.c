/*
** exec.c for exec.c in /home/elbouh_j/PSU_2014_minishell1
** 
** Made by jamal elbouhali
** Login   <elbouh_j@epitech.net>
** 
** Started on  Wed Jan 28 13:38:34 2015 jamal elbouhali
** Last update Fri Jan 30 22:58:27 2015 jamal elbouhali
*/

#include <unistd.h>
#include <stdlib.h>
#include "my.h"

char	**check_exec(char **com, char **path, char **env)
{
  int	i;
  char	*s;

  i = 0;
  while (path[i] != NULL)
    {
      s = my_strcat(path[i], com[0]);
      if (access(s, X_OK) == 0)
	{
	  execve(s, com, env);
	  return (env);
	}
      i = i + 1;
    }
  return (NULL);
}

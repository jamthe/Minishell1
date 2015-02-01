/*
** exec.c for exec.c in /home/elbouh_j/PSU_2014_minishell1
** 
** Made by jamal elbouhali
** Login   <elbouh_j@epitech.net>
** 
** Started on  Wed Jan 28 13:38:34 2015 jamal elbouhali
** Last update Sun Feb  1 15:39:07 2015 jamal elbouhali
*/

#include <unistd.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "my.h"

char	**check_exec(char **com, char **path, char **env)
{
  pid_t	child;
 
  if ((child = fork()) == -1)
    {
      my_putstr("fork error");
      return (NULL);
    }
  if (child == 0)
    exec(com, path, env, child);
  else
    wait(NULL);
}

int	exec(char **com, char **path, char **env, pid_t child)
{
  int	i;
  char	*s;

  i = 0;
  while (path[i] != NULL)
    {
      signal(SIGINT, 0);
      s = my_strcat(path[i], com[0]);
      if (access(s, X_OK) == 0)
	{
	  if (execve(s, com, env) == -1)
	    {
	      my_putstr("exec error\n");
	      kill(child, SIGINT);
	    }
	}
      i = i + 1;
    }
  my_putstr("Command not found\n");
  kill(child, SIGINT);
}

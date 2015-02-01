/*
** main.c for main in /home/elbouh_j/PSU_2014_minishell1
** 
** Made by jamal elbouhali
** Login   <elbouh_j@epitech.net>
** 
** Started on  Mon Jan 19 21:34:51 2015 jamal elbouhali
** Last update Sun Feb  1 19:58:09 2015 jamal elbouhali
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <signal.h>
#include "my.h"

char	**get_path(char **env)
{
  char	*str;
  char	**tab;
  
  str = my_getenv("PATH=", env);
  if ((tab = word_tab(str, ':')) == NULL)
    return (NULL);
  return (tab);
}

int	main(int ac, char **av, char **env)
{
  int	i;
  char	buf[4096];
  char	**path;
  char	**comm;

  (void)ac;
  (void)av;
  signal(SIGINT, SIG_IGN);
  if (env[0] != NULL)
    path = get_path(env);
  my_putstr("$> ");
  while ((i = read(0, buf, 4096)) > 0)
    {
      buf[i] = 0;
      comm = word_tab(buf, ' ');
      if (check_builtin(comm, env) == 1 && buf[0] != '\n')
	check_exec(comm, path, env);
      my_putstr("$> ");
    }
  my_putchar('\n');
  return (0);
}

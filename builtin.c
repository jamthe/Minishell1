/*
** builtin.c for builtin.c in /home/elbouh_j/PSU_2014_minishell1
** 
** Made by jamal elbouhali
** Login   <elbouh_j@epitech.net>
** 
** Started on  Tue Jan 27 14:28:49 2015 jamal elbouhali
** Last update Tue Jan 27 18:34:32 2015 jamal elbouhali
*/

#include <stdio.h>
#include <stdlib.h>


int	check_builtin(char **env, char *com)
{
  if ((my_strcmp(com, "cd")) == 0)
    my_cd(env);
  else if ((my_strcmp(com, "setenv")) == 0)
    my_setenv(env);
  else if ((my_strcmp(com, "unsetenv")) == 0)
    my_unsetenv(env);
  else if ((my_strcmp(com, "env")) == 0) 
    my_env(env);
  else if ((my_strcmp(com, "exit")) == 0)
    my_exit(env);
  else
    return (1);
  return (0);
}

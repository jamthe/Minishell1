/*
** builtin.c for builtin.c in /home/elbouh_j/PSU_2014_minishell1
** 
** Made by jamal elbouhali
** Login   <elbouh_j@epitech.net>
** 
** Started on  Tue Jan 27 14:28:49 2015 jamal elbouhali
** Last update Sun Feb  1 18:21:41 2015 jamal elbouhali
*/

#include "my.h"

int	check_builtin(char **com, char **env)
{
  if ((my_strcmp(com[0], "cd")) == 0)
    my_cd(com[1]);
  else if ((my_strcmp(com[0], "setenv\n")) == 0)
    my_setenv();
  else if ((my_strcmp(com[0], "unsetenv\n")) == 0)
    my_unsetenv();
  else if ((my_strcmp(com[0], "env\n")) == 0) 
    my_env(env);
  else if ((my_strcmp(com[0], "exit\n")) == 0)
    my_exit();
  else
    return (1);
  return (0);
}

/*
** builtin.c for builtin.c in /home/elbouh_j/PSU_2014_minishell1
** 
** Made by jamal elbouhali
** Login   <elbouh_j@epitech.net>
** 
** Started on  Tue Jan 27 14:28:49 2015 jamal elbouhali
** Last update Wed Jan 28 13:57:03 2015 jamal elbouhali
*/

#include "my.h"

int	check_builtin(char *com)
{
  if ( (my_strcmp(com, "cd\n")) == 0 || (my_strcmp(com, "cd")) == 0)
    my_cd();
  else if ((my_strcmp(com, "setenv\n")) == 0)
    my_setenv();
  else if ((my_strcmp(com, "unsetenv\n")) == 0)
    my_unsetenv();
  else if ((my_strcmp(com, "env\n")) == 0) 
    my_env();
  else if ((my_strcmp(com, "exit\n")) == 0)
    my_exit();
  /*  else
    {
      my_putstr("NO BUILTIN\n");
      return (1);
      }*/
  return (0);
}

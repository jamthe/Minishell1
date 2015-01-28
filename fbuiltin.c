/*
** fbuiltin.c for fbuiltin.c in /home/elbouh_j/PSU_2014_minishell1
** 
** Made by jamal elbouhali
** Login   <elbouh_j@epitech.net>
** 
** Started on  Tue Jan 27 18:37:04 2015 jamal elbouhali
** Last update Wed Jan 28 13:47:01 2015 jamal elbouhali
*/

#include "my.h"

int	my_cd()
{
  my_putstr("hello\n");
  return (0);
}

int	my_unsetenv(char **env)
{
  my_putstr("my\n");
  return (0);
}

int	my_setenv(char **env)
{
  my_putstr("name\n");
  return (0);
}

int	my_env(char **env)
{
  my_putstr("is\n");
  return (0);
}

int	my_exit(char **env)
{
  my_putstr("Jamal\n");
  return (0);
}

/*
** my_get_env.c for my_get_env.c in /home/elbouh_j/PSU_2014_minishell1
** 
** Made by jamal elbouhali
** Login   <elbouh_j@epitech.net>
** 
** Started on  Tue Jan 27 13:45:46 2015 jamal elbouhali
** Last update Tue Jan 27 14:05:03 2015 jamal elbouhali
*/

#include <stdlib.h>
#include <unistd.h>
#include "my.h"

char    *get_env(char *str, char **env)
{
  int   i;
  char  *j;

  i = 0;
  if (env == NULL || env[i] == NULL)
    return (NULL);
  while (env[i] && my_strncmp(str, env[i], my_strlen(str)) != 0)
    i++;
  j = &(env[i][my_strlen(str)]);
  return (j);
}

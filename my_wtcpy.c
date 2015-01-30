/*
** my_wtcpy.c for wtcpy in /home/elbouh_j/PSU_2014_minishell1
** 
** Made by jamal elbouhali
** Login   <elbouh_j@epitech.net>
** 
** Started on  Wed Jan 28 22:17:35 2015 jamal elbouhali
** Last update Wed Jan 28 22:44:02 2015 jamal elbouhali
*/

#include "my.h"

int	my_tab_len(char **env)
{
  int	i;

  i = 0;
  while (env[i])
    i++;
  return (i);
}

char	**wtcpy(char **env)
{
  int	i;
  int	len;
  char	**newt;

  i = 0;
  len = my_tab_len(env);
  newt = xmalloc(sizeof(newt) * (len + 1));
  while (env[i])
    {
      newt[i] = xmalloc(sizeof(newt[i]) * (my_strlen(env[i] + 1)));
      newt[i] = my_strcpy(newt[i], env[i]);
      i++;
    }
  newt[i] = 0;
  return (newt);
}

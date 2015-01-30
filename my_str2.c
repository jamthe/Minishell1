/*
** my_str2.c for my_str2.c in /home/elbouh_j/PSU_2014_minishell1
** 
** Made by jamal elbouhali
** Login   <elbouh_j@epitech.net>
** 
** Started on  Tue Jan 27 18:15:30 2015 jamal elbouhali
** Last update Fri Jan 30 17:42:49 2015 jamal elbouhali
*/

#include <stdlib.h>
#include "my.h"

int     my_strcmp(char *s1, char *s2)
{
  int   i;

  i = 0;
  while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
    i = i + 1;
  if (s1 == NULL || s2 == NULL)
    return (1);
  if (s1[i] == '\0' && s2[i] == '\0')
    return (0);
  if (s1[i] < s2[i] || s1[i] > s2[i])
    return (1);
  return (0);
}

char    *my_strcpy(char *dest, char *src)
{
  int   x;

  x = 0;
  while (src[x] != '\0')
    {
      dest[x] = src[x];
      x = x + 1;
    }
  dest[x] = 0;
  return (dest);
}

char    *my_strcat(char *dest, char *src)
{
  int   up;
  int   of;

  up = 0;
  of = my_strlen(dest);
  dest[of] = '/';
  of = of + 1;
  while (src[up] != '\0')
    {
      dest[of] = src[up];
      up = up + 1;
      of = of + 1;
    }
  dest[of] = '\0';
  return (dest);
}

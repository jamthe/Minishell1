/*
** my_str2.c for my_str2.c in /home/elbouh_j/PSU_2014_minishell1
** 
** Made by jamal elbouhali
** Login   <elbouh_j@epitech.net>
** 
** Started on  Tue Jan 27 18:15:30 2015 jamal elbouhali
** Last update Tue Jan 27 18:16:01 2015 jamal elbouhali
*/

#include <stdlib.h>

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


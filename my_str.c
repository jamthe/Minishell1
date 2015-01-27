/*
** my_str.c for my_str in /home/elbouh_j/PSU_2014_minishell1
** 
** Made by jamal elbouhali
** Login   <elbouh_j@epitech.net>
** 
** Started on  Mon Jan 19 21:36:30 2015 jamal elbouhali
** Last update Tue Jan 27 14:13:46 2015 jamal elbouhali
*/

#include <stdlib.h> 
#include "my.h"
#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != 0)
    {
      my_putchar(str[i]);
      i++;
    }
}

int     my_strlen(char *str)
{
  int   i;

  i = 0;
  while (str[i] != 0)
    i++;
  return (i);
}

void    *xmalloc(int n)
{
  void  *str;

  str = malloc(n);
  if (str == NULL)
    {
      write(2, "malloc failed", 13);
      exit(1);
    }
  else
    return (str);
}

int     my_strncmp(char *s1, char *s2, int nb)
{
  int   i;

  i = 0;
  if (s1 == NULL || s2 == NULL)
    return (1);
  while (s1[i] == s2[i] && s1[i] != 0 && i < nb - 1)
    i++;
  return (s1[i] - s2[i]);
}

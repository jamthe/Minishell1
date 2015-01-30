/*
** wordtab2.c for strwordtab2 in /home/elbouh_j/PSU_2014_minishell1
** 
** Made by jamal elbouhali
** Login   <elbouh_j@epitech.net>
** 
** Started on  Fri Jan 30 19:05:32 2015 jamal elbouhali
** Last update Fri Jan 30 19:32:07 2015 jamal elbouhali
*/

#include <stdlib.h>
#include "my.h"

char            **str_wordtab_tab(char *str)
{
  char          **tab;
  t_struct      c;

  init(&c);
  if ((tab = xmalloc(sizeof(*tab) * ((my_countY(str) + 1)))) == NULL)
    return (NULL);
  while (str[c.i] != '\0')
    {
      if (str[c.i] == ' ')
        {
          while (str[c.i] == ' ')
            c.i = c.i + 1;
          c.j = c.j + 1;
          c.b = 0;
        }
      if ((tab[c.j] = xmalloc(sizeof(char) * (my_countX(str) + 1))) == NULL)
        return (NULL);
      while ((str[c.i] != ' ') && (str[c.i] != '\0'))
        tab[c.j][c.b++] = str[c.i++];
      tab[c.j][c.b] = '\0';
    }
  tab[c.j + 1] = 0;
  return (tab);
}

int     my_countY_tab(char *str)
{
  int   i;
  int   j;

  i = 0;
  j = 1;
  while (str[i] != '\0')
    {
      if (str[i] == ' ' && str[i + 1] != '\0')
        j = j + 1;
      i = i + 1;
    }
  return (j);
}

int     my_countX_tab(char *str)
{
  int   i;

  i = 0;
  while ((str[i] != ' ') && (str[i] != '\0'))
    i = i + 1;
  i = i + 1;
  return (i);
}

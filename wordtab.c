/*
** wordtab.c for wordtab.c in /home/elbouh_j/str_to_world_tab
** 
** Made by jamal elbouhali
** Login   <elbouh_j@epitech.net>
** 
** Started on  Wed Jan 28 11:25:53 2015 jamal elbouhali
** Last update Sun Feb  1 16:36:24 2015 jamal elbouhali
*/

#include <stdlib.h>
#include "my.h"


int	my_countY(char *str, char d)
{
  int	i;
  int	j;

  i = 0;
  j = 1;
  while (str[i] != '\0')
    {
      if (str[i] == d && str[i + 1] != '\0')
	j = j + 1;
      i = i + 1;
    }
  return (j);
}

int	my_countX(char *str, char j)
{
  int	i;

  i = 0;
  while ((str[i] != j) && (str[i] != '\0'))
    i = i + 1;
  i = i + 1;
  return (i);
}

char		**str_wordtab(char *str, char j)
{
  char		**tab;
  t_struct	c;

  init(&c);
  if ((tab = xmalloc(sizeof(*tab) *
		     ((my_countY(str, j) + 1)))) == NULL)
    return (NULL);
  while (str[c.i] != '\0')
    {
      while (str[c.i] == j)
	c.i = c.i + 1;
      if ((tab[c.j] = xmalloc(sizeof(char) *
			      (my_countX(str + c.i, j) + 1))) == NULL)
	return (NULL);
      c.b = 0;
      while ((str[c.i] != j && str[c.i] != '\0'))
	tab[c.j][c.b++] = str[c.i++];
      tab[c.j][c.b] = '\0';
      c.j = c.j + 1;
    }
  tab[c.j] = NULL;
  return (tab);
}

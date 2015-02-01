/*
** wordtab.c for wordtab.c in /home/elbouh_j/str_to_world_tab
** 
** Made by jamal elbouhali
** Login   <elbouh_j@epitech.net>
** 
** Started on  Wed Jan 28 11:25:53 2015 jamal elbouhali
** Last update Sun Feb  1 23:30:08 2015 jamal elbouhali
*/

#include <stdlib.h>
#include "my.h"

int	yy(char *str, char x)
{
  int	i;
  int	j;

  i = 0;
  j = 1;
  while (str[i] != '\0')
    {
      if (str[i] == x && str[i + 1] != '\0')
	j++;
      i++;
    }
  return (j);
}

int	xx(char *str, char x)
{
  int	i;

  i = 0;
  while ((str[i] != '\0') && (str[i] != x))
    i++;
  i++;
  return (i);
}

char		**word_tab(char *str, char x)
{
  char		**tab;
  int		a;
  int		b;
  int		c;

  a = 0;
  c = 0;
  if (str == NULL)
    return (NULL);
  if ((tab = xmalloc(sizeof(*tab) *((yy(str, x) + 1)))) == NULL)
    return (NULL);
  while (str[a] != '\0')
    {
      while (str[a] == x)
	a = a + 1;
      if ((tab[c] = xmalloc(sizeof(char) *(xx(str + a, x) + 1))) == NULL)
	return (NULL);
      b = 0;
      while ((str[a] != x && str[a] != '\0'))
	tab[c][b++] = str[a++];
      tab[c][b] = '\0';
      c = c + 1;
    }
  tab[c] = NULL;
  return (tab);
}

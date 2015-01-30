/*
** show.c for show.c in /home/elbouh_j/str_to_world_tab
** 
** Made by jamal elbouhali
** Login   <elbouh_j@epitech.net>
** 
** Started on  Wed Jan 28 13:06:32 2015 jamal elbouhali
** Last update Wed Jan 28 13:07:05 2015 jamal elbouhali
*/

#include "my.h"

void	show(char **result)
{
  int	i;

  i = 0;
  while (result[i])
    {
      my_putstr(result[i]);
      my_putchar('\n');
      i = i + 1;
    }
}

/*
** show.c for show.c in /home/elbouh_j/PSU_2014_minishell1
** 
** Made by jamal elbouhali
** Login   <elbouh_j@epitech.net>
** 
** Started on  Sun Feb  1 18:19:56 2015 jamal elbouhali
** Last update Sun Feb  1 18:19:57 2015 jamal elbouhali
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

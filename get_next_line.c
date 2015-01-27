/*
** get_next_line.c for gnl.c in /home/elbouh_j/Wolf3D/source
** 
** Made by jamal elbouhali
** Login   <elbouh_j@epitech.net>
** 
** Started on  Fri Dec 26 15:43:45 2014 jamal elbouhali
** Last update Fri Jan  2 22:48:21 2015 jamal elbouhali
*/

#include <stdlib.h>
#include <unistd.h>
#include "my.h"

char            *get_next_line(const int fd)
{
  static int    ret = 0;
  static char   buffer[SIZE + 1];
  static int    i = 0;
  char          *line;
  int           count;
  int           j;

  count = 0;
  j = 0;
  line = NULL;
  if ((ret = xread(fd, buffer + i, SIZE_R - i)) == -1)
    exit(1);
  buffer[SIZE + 1] = 0;
  if (buffer[j])
    {
      if ((line = malloc(sizeof(*line) * SIZE + 1)) == NULL)
        exit(1);
      my_gset(line, 0, SIZE + 1);
      while (buffer[j] && buffer[j] != '\n')
        line[count++] = buffer[j++];
      if (buffer[j] == '\n')
        j++;
      i = offset(buffer, j);
    }
  return (line);
}


void	my_gset(char *str, int x, int n)
{
  int	i;

  i = 0;
  while (i <= n)
    str[i++] = x;
}

int	offset(char *buffer, int i)
{
  int	j;
  int	k;

  j = 0;
  while (buffer[i])
    buffer[j++] = buffer[i++];
  buffer[j] = 0;
  k = j;
  while (buffer[++k])
    buffer[k] = 0;
  return (j);
}

int	xread(int fd, void *buffer, int size)
{
  int	ret;

  ret = read(fd, buffer, size);
  if (ret == -1)
    {
      write(2, "error", 5);
      return (-1);
    }
  return (ret);
}

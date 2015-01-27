/*
** my.h for my.h in /home/elbouh_j/PSU_2014_minishell1
** 
** Made by jamal elbouhali
** Login   <elbouh_j@epitech.net>
** 
** Started on  Thu Jan 22 13:56:51 2015 jamal elbouhali
** Last update Tue Jan 27 15:01:59 2015 jamal elbouhali
*/

#ifndef MY_H_
# define MY_H_

# define SIZE_R	200
# define SIZE	SIZE_R + 1

char	*get_next_line(const int fd);
void	my_gset(char *str, int x, int n);
int	offset(char *buffer, int i);
void	my_putstr(char *str);
void	my_putchar(char c);
int	my_strlen(char *str);
void	*xmalloc(int n);
int	my_strncmp(char *s1, char *s2, int nb);
char	*get_env(char *str, char **env);
	
#endif /* !MY_H_ */

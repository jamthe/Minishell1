/*
** my.h for my.h in /home/elbouh_j/PSU_2014_minishell1
** 
** Made by jamal elbouhali
** Login   <elbouh_j@epitech.net>
** 
** Started on  Thu Jan 22 13:56:51 2015 jamal elbouhali
** Last update Wed Jan 28 13:40:37 2015 jamal elbouhali
*/

#ifndef MY_H_
# define MY_H_

void	my_putstr(char *str);
void	my_putchar(char c);
int	my_strlen(char *str);
void	*xmalloc(int n);
int	my_strncmp(char *s1, char *s2, int nb);
int	my_strcmp(char *s1, char *s2);
char	*get_env(char *str, char **env);
int	check_builtin(char *com);
int     my_cd();
int     my_unsetenv();
int     my_setenv();
int     my_env();
int     my_exit();
int	check_exec(char *com);

#endif /* !MY_H_ */

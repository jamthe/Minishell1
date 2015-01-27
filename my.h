/*
** my.h for my.h in /home/elbouh_j/PSU_2014_minishell1
** 
** Made by jamal elbouhali
** Login   <elbouh_j@epitech.net>
** 
** Started on  Thu Jan 22 13:56:51 2015 jamal elbouhali
** Last update Tue Jan 27 18:45:37 2015 jamal elbouhali
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
int	my_strcmp(char *s1, char *s2);
char	*get_env(char *str, char **env);
int	check_builtin(char **env, char *com);
int     my_cd(char **env);
int     my_unsetenv(char **env);
int     my_setenv(char **env);
int     my_env(char **env);
int     my_exit(char **env);


#endif /* !MY_H_ */

/*
** my.h for my.h in /home/elbouh_j/PSU_2014_minishell1
** 
** Made by jamal elbouhali
** Login   <elbouh_j@epitech.net>
** 
** Started on  Thu Jan 22 13:56:51 2015 jamal elbouhali
** Last update Sat Jan 31 14:51:09 2015 jamal elbouhali
*/

#ifndef MY_H_
# define MY_H_

typedef struct s_struct
{
  int           i;
  int           j;
  int           b;
}               t_struct;

void    init(t_struct *c);
void    show(char **result);
void    lis(char *str);
char    *my_getenv(char *str, char **env);
void    *xmalloc(int size);
char    **str_wordtab(char *str, char j);
int     my_countY(char *str, char d);
int     my_countX(char *str, char j);
char    *get_env(char *str, char **env);
void	my_putstr(char *str);
void	my_putchar(char c);
int	my_strlen(char *str);
void	*xmalloc(int n);
int	my_strcmp(char *s1, char *s2);
char	*get_env(char *str, char **env);
int	check_builtin(char *com);
int     my_cd();
int     my_unsetenv();
int     my_setenv();
int     my_env();
int     my_exit();
char	**check_exec(char **com, char **buf, char **env);
char	*my_strcpy(char *dest, char *src);
int	my_tab_len(char **env);
char	**wtcpy(char **env);
char	*my_strcat(char *dest, char *src);
char	**get_path(char **env);

#endif /* !MY_H_ */

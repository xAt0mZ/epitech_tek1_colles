/*
** hprototype.h for hprototype in /home/mantez_p//mixword
** 
** Made by paul mantez
** Login   <mantez_p@pc-mantez_p>
** 
** Started on  Tue May  7 10:40:19 2013 paul mantez
** Last update Tue May  7 13:05:49 2013 louis-philippe baron
*/

#ifndef HPROTOTYPE_H_
# define HPROTOTYPE_H_

int		check_word(char **tab, char *str);
int		check_up_right(char **tab, int i, int j, char *str);
int		check_up_left(char **tab, int i, int j, char *str);
int		check_down_right(char **tab, int i, int j, char *str);
int		check_down_left(char **tab, int i, int j, char *str);
int		check_right(char **tab, int i, int j, char *str);
int		check_left(char **tab, int i, int j, char *str);
int		check_up(char **tab, int i, int j, char *str);
int		check_down(char **tab, int i, int j, char *str);
char		**create_grid(int z);
void		my_putchar(char c);
void		my_putstr(char *str);
int		my_strlen(char *str);
int		my_getnbr(char *str);
int		my_putnbr(int nb);
int		put_letter(char **tab);
int		show_by_right(char **tab, int i, int j, int a);
int		show_by_left(char **tab, int i, int j, int a);
int		show_up(char **tab, int i, int j, int a);
int		show_down(char **tab, int i, int j, int a);
int		show_up_right(char **tab, int i, int j, int a);
int		show_up_left(char **tab, int i, int j, int a);
int		show_down_right(char **tab, int i, int j, int a);
int		show_down_left(char **tab, int i, int j, int a);
char		**get_file(int);

#endif /* !HPROTOTYPE_H_ */

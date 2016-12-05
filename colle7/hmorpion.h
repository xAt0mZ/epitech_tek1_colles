/*
** hmorpion.h for morpion in /home/baron_l//local/rendu/projets/Colle/colle7
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Jun  4 10:10:55 2013 louis-philippe baron
** Last update Tue Jun  4 12:54:12 2013 louis-philippe baron
*/

#ifndef		MORPION_H_
# define	MORPION_H_

#define	HUMAN	(3)
#define	BOT	(2)
#define	ERROR	(1)

int		show_tab(char **tab);
int		free_tab(char **tab);
void		my_putchar(char c);
int		my_putstr(char *str);
int		my_strcmp(char *s1, char *s2);
int		check_buffer(char *buffer, int size, char **tab);
int		check_option(int ac, char **av);
int		is_a_win(char **tab);
int		color(char c);
int		define_starter(char **tab);
int		draw();
int		victory(char *str, int starter);
int		check_ial_ver(char **tab, char c, char v);
int		check_ial_hor(char **tab, char c, char v);
int		trapole(char **tab, char c);
int		trap(char **tab, char c);
int		complete(char **tab, char c, int starter);
int		check_ia_ver(char **tab, char c);
int		check_ia_hor(char **tab, char c);
int		ia1(char **tab, char c, char v);
int		bot_play(char **tab, int starter);
int		is_tab_full(char **tab, int *ret);
int		play(char *buffer, char **tab, int starter);
int		put_victory(int ret, char *str, char **tab);
int		show_last(char **tab);

#endif	/* !MORPION_H_ */

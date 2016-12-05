/*
** my.h for my in /home/mantez_p//calculator
** 
** Made by paul mantez
** Login   <mantez_p@pc-mantez_p>
** 
** Started on  Tue Apr 30 09:57:55 2013 paul mantez
** Last update Tue Apr 30 10:46:30 2013 louis-philippe baron
*/

#ifndef MY_H_
# define MY_H_

int		add(int a, int b);
int		sub(int a, int b);
int		multi(int a, int b);
int		division(int a, int b);
int		mod(int a, int b);
int		do_add(t_list **list);
int		do_multi(t_list **list);
void		my_putchar(char c);
void		my_putstr(char *str);
int		my_strlen(char *str);
int		my_getnb(char *str);

#endif /* !MY_H_ */

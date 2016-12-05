/*
** my.h for my in /home/mantez_p//calculator
** 
** Made by paul mantez
** Login   <mantez_p@pc-mantez_p>
** 
** Started on  Tue Apr 30 09:57:55 2013 paul mantez
** Last update Tue Apr 30 12:32:58 2013 paul mantez
*/

#ifndef MY_H_
# define MY_H_

int		add(int a, int b);
int		sub(int a, int b);
int		multi(int a, int b);
int		division(int a, int b);
int		mod(int a, int b);
int		do_add(t_list **list);
int		do_add_parenthesis(t_list **list);
int		do_multi(t_list **list);
int		do_multi_parenthesis(t_list **list);
void		my_putchar(char c);
void		my_putstr(char *str);
int		my_strlen(char *str);
int		my_putnbr(int nb);
int		my_getnbr(char *str);
int		counter(char *str);
int		tab_len(char **tab);
int		check_validity(char *str);
int		my_free(t_list *list);
int		free_list(t_list *list);
int		free_tab(char **tab);
t_list		*get_exp(char *str);
char		**my_str_to_wordtab(char *str, char *operand);

#endif /* !MY_H_ */

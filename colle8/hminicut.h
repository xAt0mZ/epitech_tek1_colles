/*
** hminicut.h for minicut in /home/baron_l//local/rendu/projets/Colle/colle8
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Thu Jun 13 09:16:09 2013 louis-philippe baron
** Last update Thu Jun 13 11:57:44 2013 louis-philippe baron
*/

#ifndef		HMINICUT_H_
# define	HMINICUT_H_

#include	"hget_next_line.h"

# define	ERROR	(1)

/*
** Prototypes
*/
void		my_putchar(char c);
int		my_putstr(char *str);
int		my_getnbr(char *str);
int		my_memset(char *str, int size);
int		my_strlen(char *str);

int		option_c(char *row);
int		option_d(char *delim, char *row);
char		*get_rows(char *str);
char		**my_str_to_wordtab(char *str, char *param);
int		free_tab(char **tab);
int		is_in(char c, char *param);

int		checkArgs3(char **av);
int		checkArgs5(char **av);

#endif	/* !HMINICUT_H_ */

/*
** hcalculator.h for calculator in /home/baron_l//local/rendu/projets/Colle/colle2/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Apr 30 09:13:40 2013 louis-philippe baron
** Last update Tue Apr 30 11:18:42 2013 louis-philippe baron
*/

#ifndef	CALCULATOR_H_
# define	CALCULATOR_H_

#include	<unistd.h>
#include	<stdlib.h>

#define	ERROR	(-1)
#define	OPERAND	(1)
#define	NB	(0)

typedef	struct	s_list
{
  char		content;
  char		operand;
  int		nb;
  struct s_list	*next;
  struct s_list	*prev;
}		t_list;

#include	"my.h"

#endif	/* CALCULATOR_H_ */

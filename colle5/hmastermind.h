/*
** hmastermind.h for mastermind in /home/baron_l//local/rendu/projets/Colle/colle5
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue May 21 09:22:19 2013 louis-philippe baron
** Last update Tue May 21 11:49:29 2013 louis-philippe baron
*/

#ifndef	MASTERMIND_H_
# define	MASTERMIND_H_

#include	<unistd.h>
#include	<stdlib.h>

#include	"hget_next_line.h"

#define	ERROR	(-1)

typedef	struct	s_pion
{
  int		valids;
  int		invalids;
  int		codesize;
  int		tenta;
  char		*code;
  char		*list;
}		t_pion;

#endif	/* MASTERMIND_H_ */

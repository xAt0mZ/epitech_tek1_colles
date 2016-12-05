/*
** main.c for mastermind in /home/baron_l//local/rendu/projets/Colle/colle5
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue May 21 09:02:50 2013 louis-philippe baron
** Last update Tue May 21 11:50:06 2013 louis-philippe baron
*/

#include	"hmastermind.h"

static int	mastermind(int ac, char **av)
{
  t_pion	pion;

  if (ac > 1 && check_args(ac, av, &pion) == ERROR)
    return (ERROR);
  fill_pion(&pion)
  return (0);
}

int		main(int ac, char **av)
{
  if (ac % 2 == 1)
    {
      if (mastermind(ac, av) == ERROR)
	return (ERROR);
    }
  return (0);
}

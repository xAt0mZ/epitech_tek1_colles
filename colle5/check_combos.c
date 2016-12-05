/*
** check_combos.c for mastermind in /home/baron_l//local/rendu/projets/Colle/colle5
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue May 21 11:09:24 2013 louis-philippe baron
** Last update Tue May 21 12:33:47 2013 louis-philippe baron
*/

#include	"hmastermind.h"

int		check_combos_3(char **av, t_pion *pion)
{
  int		i;

  i = select_check(av[1][1]);
  if (i == 0 && (pion->list = my_strdup(av[2])) == NULL)
    return (ERROR);
  else if (i == 1)
    pion->round = my_getnbr(av[2]);
  else if (i == 2)
    pion->codesize = my_getnbr(av[2]);
  else if (i == 3 && (pion->code = my_strdup(av[2])) == NULL)
    return (ERROR);
  return (0);
}

int		check_combos_9(char **av, t_pion *pion)
{
  int		cpt[4];

  cpt[0] = select_check(av[1][1]);
  cpt[1] = select_check(av[3][1]);
  cpt[2] = select_check(av[5][1]);
  cpt[3] = select_check(av[7][1]);
  if (cpt[0] == cpt[1] || cpt[0] == cpt[2] || cpt[0] == cpt[3]
      || cpt[1] == cpt[2] || cpt[1] == cpt[3] || cpt[2] == cpt[3])
    {
      my_putstr("Two args are same ones\n");
      return (ERROR);
    }

  return (0);
}

/*
** combo7.c for mastermind in /home/baron_l//local/rendu/projets/Colle/colle5
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue May 21 12:33:32 2013 louis-philippe baron
** Last update Tue May 21 12:46:54 2013 louis-philippe baron
*/

#include	"hmastermind.h"

static int	follow(char **av, t_pion *pion, int cpt[])
{
  if (((cpt[0] == 3 && cpt[1] == 2) || (cpt[1] == 3 && cpt[0] == 2))
      && check_cs(av[2], av[4]) == ERROR)
    return (ERROR);
  else if (((cpt[0] == 3 && cpt[1] == 2) || (cpt[1] == 3 && cpt[0] == 2))
	   && check_cs(av[2], av[4]) == ERROR)
    return (ERROR);
  else if (((cpt[0] == 3 && cpt[1] == 2) || (cpt[1] == 3 && cpt[0] == 2))
	   && check_cs(av[2], av[4]) == ERROR)
    return (ERROR);
  return (0);
}

static int	check_special_7(char **av, t_pion *pion, int cpt[])
{
  if (cpt[1] == 2)
    pion->codesize = my_getnbr(av[4]);
  if (cpt[2] == 2)
    pion->codesize = my_getnbr(av[6]);
  if ((cpt[0] == 3 && (pion->code = my_strdup(av[2])) == NULL)
      || (cpt[1] == 3 && (pion->code = my_strdup(av[4])) == NULL)
      || (cpt[2] == 3 && (pion->code = my_strdup(av[6])) == NULL))
    return (ERROR);
  if (cpt[0] == 3 && cpt[1] == 0 && check_cp(av[2], av[4]) == ERROR)
    return (ERROR);
  else if (cpt[1] == 3 && cpt[0] == 0 && check_cp(av[4], av[2]) == ERROR)
    return (ERROR);
  if (cpt[0] == 3 && cpt[2] == 0 && check_cp(av[2], av[6]) == ERROR)
    return (ERROR);
  else if (cpt[2] == 3 && cpt[0] == 0 && check_cp(av[6], av[2]) == ERROR)
    return (ERROR);
  if (cpt[1] == 3 && cpt[2] == 0 && check_cp(av[4], av[6]) == ERROR)
    return (ERROR);
  else if (cpt[2] == 3 && cpt[1] == 0 && check_cp(av[6], av[4]) == ERROR)
    return (ERROR);
  if (follow(av, pion, cpt) == ERROR)
    return (ERROR);
  return (0);
}

int		check_combos_7(char **av, t_pion *pion)
{
  int		cpt[3];

  cpt[0] = select_check(av[1][1]);
  cpt[1] = select_check(av[3][1]);
  cpt[2] = select_check(av[5][1]);
  if (cpt[0] == cpt[1] || cpt[0] == cpt[2] || cpt[1] == cpt[2])
    {
      my_putstr("Two args are same ones\n");
      return (ERROR);
    }
  if ((cpt[0] == 0 && (pion->list = my_strdup(av[2])) == NULL)
      || (cpt[1] == 0 && (pion->list = my_strdup(av[4])) == NULL)
      || (cpt[2] == 0 && (pion->list = my_strdup(av[6])) == NULL))
    return (ERROR);
  if (cpt[0] == 1)
    pion->round = my_getnbr(av[2]);
  if (cpt[1] == 1)
    pion->round = my_getnbr(av[4]);
  if (cpt[2] == 1)
    pion->round = my_getnbr(av[6]);
  if (cpt[0] == 2)
    pion->codesize = my_getnbr(av[2]);
  if (check_special_7(av, pion, cpt) == ERROR)
    return (ERROR);
  return (0);
}

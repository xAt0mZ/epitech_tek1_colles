/*
** combo5.c for mastermind in /home/baron_l//local/rendu/projets/Colle/colle5
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue May 21 12:00:46 2013 louis-philippe baron
** Last update Tue May 21 12:38:13 2013 louis-philippe baron
*/

#include	"hmastermind.h"

static int	check_special_5(char **av, int i, int j, t_pion *pion)
{
  if (i == 2)
    pion->codesize = my_getnbr(av[2]);
  if (j == 2)
    pion->codesize = my_getnbr(av[4]);
  if (i == 3 && j == 0 && check_cp(av[2], av[4]) == ERROR)
    return (ERROR);
  else if (j == 3 && i == 0 && check_cp(av[4], av[2]) == ERROR)
    return (ERROR);
  if (((i == 3 && j == 2) || (j == 3 && i == 2))
      && check_cs(av[2], av[4]) == ERROR)
    return (ERROR);
  return (0);
}

int		check_combos_5(char **av, t_pion *pion)
{
  int		i;
  int		j;

  i = select_check(av[1][1]);
  j = select_check(av[3][1]);
  if (i == j)
    {
      my_putstr("Two args are same ones\n");
      return (ERROR);
    }
  if ((i == 0 && (pion->list = my_strdup(av[2])) == NULL)
      || (j == 0 && (pion->list = my_strdup(av[4])) == NULL))
    return (ERROR);
  if (i == 1)
    pion->round = my_getnbr(av[2]);
  if (j == 1)
    pion->round = my_getnbr(av[4]);
  if ((i == 3 && (pion->code = my_strdup(av[2])) == NULL)
      || (j == 3 && (pion->code = my_strdup(av[4])) == NULL))
    return (ERROR);
  if (check_special_5(av, i, j, pion) == ERROR)
    return (ERROR);
  return (0);
}

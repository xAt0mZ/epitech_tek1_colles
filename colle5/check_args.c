/*
** check_args.c for mastermind in /home/baron_l//local/rendu/projets/Colle/colle5
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue May 21 09:18:00 2013 louis-philippe baron
** Last update Tue May 21 11:51:11 2013 louis-philippe baron
*/

#include	"hmastermind.h"

static int	check_3(char **av, t_pion *pion)
{
  if (do_exist(av[1], av[2]) == ERROR)
    return (ERROR);
  if (check_combos_3(av, pion) == ERROR)
    return (ERROR);
  return (0);
}

static int	check_5(char **av, t_pion *pion)
{
  if (do_exist(av[1], av[2]) == ERROR
      || do_exist(av[3], av[4]) == ERROR)
    return (ERROR);
  if (check_combos_5(av, pion) == ERROR)
    return (ERROR);
  return (0);
}

static int	check_7(char **av, t_pion *pion)
{
  if (do_exist(av[1], av[2]) == ERROR || do_exist(av[3], av[4]) == ERROR
      || do_exist(av[5], av[6]) == ERROR)
    return (ERROR);
  if (check_combos_7(av, pion) == ERROR)
    return (ERROR);
  return (0);
}

static int	check_9(char **av, t_pion *pion)
{
  if (do_exist(av[1], av[2]) == ERROR || do_exist(av[3], av[4]) == ERROR
      || do_exist(av[5], av[6]) == ERROR || do_exist(av[7], av[8]) == ERROR)
    return (ERROR);
  if (check_combos_9(av, pion) == ERROR)
    return (ERROR);
  return (0);
}

int		check_args(int ac, char **av, t_pion *pion)
{
  int           (*checks[4])(char **, t_pion *);

  if (ac != 3 && ac != 5 && ac != 7 && ac != 9)
    {
      my_putstr("Too much arguments\n");
      my_put_error();
      return (0);
    }
  checks[0] = &check_3;
  checks[1] = &check_5;
  checks[2] = &check_7;
  checks[3] = &check_9;
  if (checks[(ac - 3) / 2](av, pion) == ERROR)
    return (ERROR);
  return (0);
}

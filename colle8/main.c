/*
** main.c for minicut in /home/baron_l//local/rendu/projets/Colle/colle8
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Thu Jun 13 09:06:21 2013 louis-philippe baron
** Last update Thu Jun 13 11:19:30 2013 louis-philippe baron
*/

#include	"hminicut.h"

static int	minicut(int ac, char **av)
{
  if (ac == 3)
    {
      if (checkArgs3(av) == ERROR)
	return (ERROR);
      if (option_c(av[2]) == ERROR)
	return (ERROR);
    }
  else if (ac == 5)
    {
      if (checkArgs5(av) == ERROR)
	return (ERROR);
      if (option_d(av[2], av[4]) == ERROR)
	return (ERROR);
    }
  return (0);
}

int		main(int ac, char **av)
{
  if (ac == 3 || ac == 5)
    {
      if (minicut(ac, av) == ERROR)
	return (ERROR);
    }
  else
    {
      my_putstr("Usage :\n- cat [FILE] | ./minicut [-c rows]\n");
      my_putstr("- cat [FILE] | ./minicut [-d sep -f rows]\n");
    }
  return (0);
}

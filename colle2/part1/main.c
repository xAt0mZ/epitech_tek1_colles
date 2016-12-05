/*
** main.c for calculator in /home/baron_l//local/rendu/projets/Colle/colle2/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Apr 30 09:09:57 2013 louis-philippe baron
** Last update Tue Apr 30 11:43:08 2013 louis-philippe baron
*/

#include	"hcalculator.h"

static int	calculator(char *str)
{
  t_list	*list;

  /* if (check_validity(str) == ERROR) */
  /*   return (ERROR); */
  if ((list = get_exp(str)) == NULL)
    {
      my_putstr("Problem in memory allocation during exp parsing\n");
      return (ERROR);
    }
  free_list(list);
  return (0);
}

int		main(int ac, char **av)
{
  if (ac == 2)
    {
      if (calculator(av[1]) == ERROR)
	return (ERROR);
    }
  else
    my_putstr("Usage : ./calculator \"expression\"");
  return (0);
}

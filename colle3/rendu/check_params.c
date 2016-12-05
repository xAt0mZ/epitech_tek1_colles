/*
** check_params.c for my_mixword in /home/baron_l//local/rendu/projets/Colle/colle3/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue May  7 09:10:37 2013 louis-philippe baron
** Last update Tue May  7 12:24:00 2013 louis-philippe baron
*/

#include	"hmix.h"

static int	check_size(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      if (!(str[i] >= '0' && str[i] <= '9'))
	{
	  my_putstr("Invalid SIZE param\n");
	  return (ERROR);
	}
      i++;
    }
  return (0);
}

static int	my_paramcmp(char *s1, char *s2)
{
  int		i;

  i = 0;
  while (s1[i])
    {
      if (s1[i] != s2[i])
	{
	  my_putstr("Invalid ");
	  my_putstr(s2);
	  my_putstr(" param\n");
	  return (ERROR);
	}
      i++;
    }
  return (0);
}

int		check_params(int ac, char **av)
{
  if ((ac == 3 && my_paramcmp(av[1], "-f") == ERROR) ||
      (ac == 5 && (my_paramcmp(av[1], "-f") == ERROR
		   || my_paramcmp(av[3], "-s") == ERROR
		   || check_size(av[4]) == ERROR)))
    return (ERROR);
  return (0);
}

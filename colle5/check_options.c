/*
** check_options.c for mastermind in /home/baron_l//local/rendu/projets/Colle/colle5
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue May 21 10:11:56 2013 louis-philippe baron
** Last update Tue May 21 11:05:17 2013 louis-philippe baron
*/

#include	"hmastermind.h"

int		check_p(char *str)
{
  int		i;
  int		j;

  j = 0;
  while (str[j])
    {
      i = 0;
      while (str[i])
	{
	  if (i != j && str[i] == str[j])
	    {
	      my_putstr("[PIONS] arg contains same value twice\n");
	      return (ERROR);
	    }
	  i++;
	}
      j++;
    }
  return (0);
}

int		check_t(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      if (!(str[i] >= '0' && str[i] <= '9'))
	{
	  my_putstr("Invalid [TENTATIVES] arg : not a positiv number\n");
	  return (ERROR);
	}
      i++;
    }
  if (my_getnbr(str) == 0)
    {
      my_putstr("Invalid [TENTATIVES] arg : equal to 0\n");
      return (ERROR);
    }
  return (0);
}

int		check_s(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      if (!(str[i] >= '0' && str[i] <= '9'))
	{
	  my_putstr("Invalid [SLOTS] arg (not a positiv number\n");
	  return (ERROR);
	}
      i++;
    }
  if (my_getnbr(str) == 0)
    {
      my_putstr("Invalid [SLOTS] arg : equal to 0\n");
      return (ERROR);
    }
  return (0);
}

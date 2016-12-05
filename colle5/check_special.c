/*
** check_special.c for mastermind in /home/baron_l//local/rendu/projets/Colle/colle5
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue May 21 12:21:01 2013 louis-philippe baron
** Last update Tue May 21 12:32:10 2013 louis-philippe baron
*/

#include	"hmastermind.h"

int		check_cp(char *s1, char *s2)
{
  int		i;
  int		j;
  int		is_in;

  i = 0;
  while (s1[i])
    {
      j = 0;
      is_in = 0;
      while (s2[j] && is_in == 0)
	{
	  if (s1[i] == s2[j])
	    is_in = 1;
	  j++;
	}
      if (is_in == 0)
	{
	  my_putstr("[CODE] contains char not defined in [PIONS]\n");
	  return (ERROR);
	}
      i++;
    }
  return (0);
}

int		check_cs(char *s1, char *s2)
{
  if (my_strlen(s1) != my_strlen(s2))
    {
      my_putstr("[CODE] doesn't have same size as defined with [SLOTS]\n");
      return (ERROR);
    }
  return (0);
}

/*
** is_tab_full.c for morpion in /home/baron_l//local/rendu/projets/Colle/colle7
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Jun  4 10:52:04 2013 louis-philippe baron
** Last update Tue Jun  4 12:53:28 2013 louis-philippe baron
*/

#include	"hmorpion.h"

int		is_tab_full(char **tab, int *ret)
{
  int		i;
  int		j;

  j = 0;
  while (j < 3)
    {
      i = 0;
      while (i < 3)
	{
	  if (tab[j][i] == ' ')
	    return (ERROR);
	  i++;
	}
      j++;
    }
  *ret = 0;
  return (0);
}

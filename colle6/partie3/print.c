/*
** print.c for text_count in /home/baron_l//local/rendu/projets/Colle/colle6/partie3
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue May 28 09:53:37 2013 louis-philippe baron
** Last update Tue May 28 10:43:17 2013 louis-philippe baron
*/

#include	"htext.h"

int		print_tab(int *tab)
{
  int		i;

  i = 0;
  while (i < 95)
    {
      if (tab[i])
	put_res(i, tab[i]);
      i++;
    }
  return (0);
}

int		print_sort_tab(int *tab)
{
  int		i;
  int		max;

  max = find_max(tab);
  while (max)
    {
      i = 0;
      while (i < 95)
	{
	  if (tab[i] == max)
	    put_res(i, tab[i]);
	  i++;
	}
      max--;
    }
  return (0);
}

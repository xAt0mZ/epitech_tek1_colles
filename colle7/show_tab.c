/*
** show_tab.c for morpion in /home/baron_l//local/rendu/projets/Colle/colle7
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Jun  4 09:15:04 2013 louis-philippe baron
** Last update Tue Jun  4 12:56:55 2013 louis-philippe baron
*/

#include	<stdlib.h>
#include	"hmorpion.h"

int		show_tab(char **tab)
{
  int		k;
  int		i;

  k = 0;
  my_putstr("+-------+\n");
  while (k < 3)
    {
      i = 0;
      my_putchar('|');
      while (tab[k][i])
	{
	  my_putchar(' ');
	  my_putchar(tab[k][i]);
	  i++;
	}
      my_putstr(" |\n");
      k++;
    }
  my_putstr("+-------+\n");
  return (0);
}

int		free_tab(char **tab)
{
  int		k;

  k = 0;
  while (tab[k])
    {
      free(tab[k]);
      k++;
    }
  free(tab);
  return (0);
}

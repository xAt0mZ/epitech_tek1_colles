/*
** show_last.c for morpion in /home/baron_l//local/rendu/projets/Colle/colle7
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Jun  4 12:22:07 2013 louis-philippe baron
** Last update Tue Jun  4 12:59:23 2013 louis-philippe baron
*/

#include	"hmorpion.h"

int		show_last(char **tab)
{
  int		j;
  int		i;

  j = 0;
  my_putstr("+-------+\n");
  while (j < 3)
    {
      i = 0;
      my_putchar('|');
      while (tab[j][i])
	{
	  my_putchar(' ');
	  if (i)
	    my_putchar(tab[j][i]);
	  else
	    color(tab[j][i]);
	  i++;
	}
      my_putstr(" |\n");
      j++;
    }
  my_putstr("+-------+\n");
  return (0);
}

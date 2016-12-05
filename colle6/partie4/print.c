/*
** print.c for text_count in /home/baron_l//local/rendu/projets/Colle/colle6/partie3
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue May 28 09:53:37 2013 louis-philippe baron
** Last update Tue May 28 10:34:44 2013 louis-philippe baron
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

static int	find_total(int *tab, int nb)
{
  int		i;
  int		res;

  i = 0;
  res = 0;
  while (i < 95)
    {
      if (tab[i] == nb)
	res++;
      i++;
    }
  return (res);
}

static int	print_this(int *tab, int max, int total)
{
  int		i;
  int		subtotal;

  i = 0;
  subtotal = 0;
  while (i < 95)
    {
      if (tab[i] == max)
	{
	  my_putchar((char) i + 32);
	  subtotal++;
	  if (total != 1 && subtotal != total)
	    my_putchar(',');
	}
      i++;
    }
  return (0);
}

int		print_sort_tab(int *tab)
{
  int		max;
  int		total;

  max = find_max(tab);
  while (max)
    {
      if ((total = find_total(tab, max)))
	{
	  my_putnbr(max);
	  my_putchar(':');
	  print_this(tab, max, total);
	  my_putchar('\n');
	}
      max--;
    }
  return (0);
}

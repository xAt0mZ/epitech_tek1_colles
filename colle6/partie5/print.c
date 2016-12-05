/*
** print.c for text_count in /home/baron_l//local/rendu/projets/Colle/colle6/partie3
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue May 28 09:53:37 2013 louis-philippe baron
** Last update Tue May 28 12:47:20 2013 louis-philippe baron
*/

#include	"htext.h"

int		print_tab(int *tab, int rev, int stat)
{
  int		i;

  (rev ? (i = 94) : (i = 0));
  while (rev ? (i >= 0) : (i < 95))
    {
      if (tab[i])
	put_res(i, tab[i], stat);
      (rev ? (i--) : (i++));
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

int		print_roption(int *tab, int rev, int stat, int size)
{
  int		max;
  int		total;
  int		i;

  max = find_max(tab);
  i = 1;
  while (rev ? (i <= max) : max)
    {
      if ((total = find_total(tab, (rev ? i : max))) != 0)
	{
	  my_putnbr(rev ? i : max);
	  my_putchar(':');
	  print_this(tab, (rev ? i : max), total);
	  if (stat)
	    stat_it(tab, (rev ? i : max), size, (rev ? 0 : 1));
	  my_putchar('\n');
	}
      (rev ? i++ : max--);
    }
  return (0);
}

int		print_toption(int *tab, int rev, int stat, int size)
{
  int		i;
  int		max;

  max = find_max(tab);
  i = 1;
  while (rev ? (i <= max) : max)
    {
      print_tab(tab, rev, stat);
      if (stat)
	stat_it(tab, (rev ? i : max), size, (rev ? 0 : 1));
      my_putchar('\n');
      (rev ? i++ : max--);
    }
  return (0);
}

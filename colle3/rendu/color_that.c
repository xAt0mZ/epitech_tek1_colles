/*
** color_that.c for color_that in /home/mantez_p//mixword
** 
** Made by paul mantez
** Login   <mantez_p@pc-mantez_p>
** 
** Started on  Tue May  7 11:36:43 2013 paul mantez
** Last update Tue May  7 12:55:52 2013 louis-philippe baron
*/

#include	"hmix.h"

int		show_by_right(char **tab, int i, int j, int a)
{
  int		m;
  int		n;

  m = 0;
  while (tab[m])
    {
      n = 0;
      while (tab[m][n] != 0)
	{
	  if (m == i && n >= j && n < j + a)
	    {
	      my_putstr("\033[32m");
	      my_putchar(tab[m][n]);
	      my_putstr("\033[0m");
	    }
	  else
	    my_putchar(tab[m][n]);
	  n++;
	}
      my_putchar('\n');
      m++;
    }
  return (0);
}

int		show_by_left(char **tab, int i, int j, int a)
{
  int		m;
  int		n;

  m = 0;
  while (tab[m])
    {
      n = 0;
      while (tab[m][n] != 0)
	{
	  if (m == i && n <= j && n > j - a)
	    {
	      my_putstr("\033[32m");
	      my_putchar(tab[m][n]);
	      my_putstr("\033[0m");
	    }
	  else
	    my_putchar(tab[m][n]);
	  n++;
	}
      my_putchar('\n');
      m++;
    }
  return (0);
}

int		show_up(char **tab, int i, int j, int a)
{
  int		m;
  int		n;

  m = 0;
  while (tab[m])
    {
      n = 0;
      while (tab[m][n] != 0)
	{
	  if (m <= i && m > i - a && n == j)
	    {
	      my_putstr("\033[32m");
	      my_putchar(tab[m][n]);
	      my_putstr("\033[0m");
	    }
	  else
	    my_putchar(tab[m][n]);
	  n++;
	}
      my_putchar('\n');
      m++;
    }
  return (0);
}

int		show_down(char **tab, int i, int j, int a)
{
  int		m;
  int		n;

  m = 0;
  while (tab[m])
    {
      n = 0;
      while (tab[m][n] != 0)
	{
	  if (m >= i && m < i + a && n == j)
	    {
	      my_putstr("\033[32m");
	      my_putchar(tab[m][n]);
	      my_putstr("\033[0m");
	    }
	  else
	    my_putchar(tab[m][n]);
	  n++;
	}
      my_putchar('\n');
      m++;
    }
  return (0);
}

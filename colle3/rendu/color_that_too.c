/*
** color_that_too.c for color_that_too in /home/mantez_p//mixword
** 
** Made by paul mantez
** Login   <mantez_p@pc-mantez_p>
** 
** Started on  Tue May  7 12:14:13 2013 paul mantez
** Last update Tue May  7 13:02:30 2013 louis-philippe baron
*/

int		show_up_right(char **tab, int i, int j, int a)
{
  int		m;
  int		n;

  m = 0;
  while (tab[m])
    {
      n = 0;
      while (tab[m][n] != 0)
	{
	  if (m <= i && m > i - a && n >= j && n < j + a
	      && m + i - a == n + j + a)
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

int		show_up_left(char **tab, int i, int j, int a)
{
  int		m;
  int		n;

  m = 0;
  while (tab[m])
    {
      n = 0;
      while (tab[m][n] != 0)
	{
	  if (m <= i && m > i - a && n <= j && n > j - a
	      && m - i - a == n - j - a)
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

int		show_down_right(char **tab, int i, int j, int a)
{
  int		m;
  int		n;

  m = 0;
  while (tab[m])
    {
      n = 0;
      while (tab[m][n] != 0)
	{
	  if (m >= i && m < i + a && n >= j
	      && n < j + a && m - i + a == n - j + a)
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

int		show_down_left(char **tab, int i, int j, int a)
{
  int		m;
  int		n;

  m = 0;
  while (tab[m])
    {
      n = 0;
      while (tab[m][n] != 0)
	{
	  if (m >= i && m < i + a && n <= j && n > j - a
	      && m - i + a == n - j - a)
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

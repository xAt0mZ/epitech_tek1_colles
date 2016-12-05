/*
** main.c for text_count in /home/baron_l//local/rendu/projets/Colle/colle6
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue May 28 09:06:20 2013 louis-philippe baron
** Last update Tue May 28 10:38:26 2013 louis-philippe baron
*/

#include	"htext.h"

static void	my_memset(int *tab)
{
  int		i;

  i = 0;
  while (i < 95)
    {
      tab[i] = 0;
      i++;
    }
  return ;
}

static int	print_tab(int *tab)
{
  int		i;

  i = 0;
  while (i < 95)
    {
      if (tab[i])
	{
	  my_putchar((char)i + 32);
	  my_putchar(':');
	  my_putnbr(tab[i]);
	  my_putchar('\n');
	}
      i++;
    }
  return (0);
}

static int	text_count(char *str)
{
  int		tab[95];
  int		i;

  my_memset(tab);
  i = 0;
  while (str[i])
    {
      if (str[i] >= ' ' && str[i] <= '~')
	tab[(int)str[i] - 32] += 1;
      i++;
    }
  print_tab(tab);
  return (0);
}

int		main(int ac, char **av)
{
  if (ac == 2)
    text_count(av[1]);
  else
    my_putstr("Usage : ./text_count [STR]\n");
  return (0);
}

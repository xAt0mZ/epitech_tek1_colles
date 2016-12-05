/*
** main.c for text_count in /home/baron_l//local/rendu/projets/Colle/colle6
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue May 28 09:06:20 2013 louis-philippe baron
** Last update Tue May 28 10:40:35 2013 louis-philippe baron
*/

#include	"htext.h"

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

static int	is_in(char c, char *param)
{
  int		i;

  i = 0;
  while (param[i])
    {
      if (param[i] == c)
	return (0);
      i++;
    }
  return (1);
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

static int	text_count_2(char *str, char *param)
{
  int		tab[95];
  int		i;

  my_memset(tab);
  i = 0;
  while (str[i])
    {
      if (str[i] >= ' ' && str[i] <= '~'
	  && is_in(str[i], param) == 0)
	tab[(int)str[i] - 32] += 1;
      i++;
    }
  print_tab(tab);
  return (0);
}

int		main(int ac, char **av)
{
  if (ac == 3)
    text_count_2(av[1], av[2]);
  else if (ac == 2)
    text_count(av[1]);
  else
    my_putstr("Usage : ./text_count [STR] [STR]\n");
  return (0);
}

/*
** main.c for text_count in /home/baron_l//local/rendu/projets/Colle/colle6
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue May 28 09:06:20 2013 louis-philippe baron
** Last update Tue May 28 10:33:45 2013 louis-philippe baron
*/

#include	"htext.h"

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

static int	text_count(char *str, int bool)
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
  if (!bool)
    print_tab(tab);
  else
    print_sort_tab(tab);
  return (0);
}

static int	text_count_2(char *str, char *param, int bool)
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
  if (!bool)
    print_tab(tab);
  else
    print_sort_tab(tab);
  return (0);
}

int		main(int ac, char **av)
{
  int		bool;

  bool = 0;
  if (ac != 1 && my_strcmp(av[1], "-r") == 0)
    bool = 1;
  if ((ac == 4 && bool == 1) || (ac == 3 && bool == 0))
    text_count_2(av[1 + bool], av[2 + bool], bool);
  else if ((ac == 2 && bool == 0) || (ac == 3 && bool == 1))
    text_count(av[1 + bool], bool);
  else
    my_putstr("Usage : ./text_count (-r) [STR] [STR]\n");
  return (0);
}

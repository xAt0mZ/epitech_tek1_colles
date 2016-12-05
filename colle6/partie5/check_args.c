/*
** check_args.c for text_count in /home/baron_l//local/rendu/projets/Colle/colle6/partie5
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue May 28 12:05:23 2013 louis-philippe baron
** Last update Tue May 28 12:58:11 2013 louis-philippe baron
*/

#include	"htext.h"

static int	fill_bool(int *booltab)
{
  int		i;

  i = 0;
  while (i < 8)
    {
      booltab[i] = 0;
      i++;
    }
  return (0);
}

static void	define_bool(char *av, int *tab, int i)
{
  if (my_strcmp(av, "-t") == 0)
    tab[0] = 1;
  else if (my_strcmp(av, "-r") == 0)
    tab[1] = 1;
  else if (my_strcmp(av, "-reverse") == 0
	   || my_strcmp(av, "-reverse=on") == 0)
    tab[2] = 1;
  else if (my_strcmp(av, "-fullstat") == 0
	   || my_strcmp(av, "-fullstat=on") == 0)
    tab[3] = 1;
  else if (my_strcmp(av, "-on_the_fly") == 0
	   || my_strcmp(av, "-on_the_fly=on") == 0)
    tab[4] = 1;
  else if (my_strcmp(av, "-reverse=off") == 0)
    tab[2] = 0;
  else if (my_strcmp(av, "-fullstat=off") == 0)
    tab[3] = 0;
  else if (my_strcmp(av, "-on_the_fly=off") == 0)
    tab[4] = 0;
  else
    {
      tab[5] += 1;
      ((tab[6] == 0) ? (tab[6] = i) : (tab[7] = i));
    }
}

int		check_args(int ac, char **av, int *tab)
{
  int		i;

  fill_bool(tab);
  if (ac == 1)
    {
      my_putstr("Usage : ./text_count (-r) [STR] [STR]\n");
      return (ERROR);
    }
  i = 0;
  while (++i < ac)
    define_bool(av[i], tab, i);
  if (tab[0] && tab[1])
    my_putstr("Can't have -t and -r at the same time\n");
  if (tab[0] && tab[2])
    my_putstr("Can't have -t and -reverse at the same time\n");
  if (tab[3] && !tab[1])
    my_putstr("Can't stat without -r option\n");
  if (tab[0] && tab[3])
    my_putstr("Can't stat with -t option\n");
  if (tab[3] && !tab[7])
    my_putstr("Can't stat without second [STR]\n");
  if ((tab[0] && tab[3]) || (tab[3] && !tab[1]) || (tab[0] && tab[1])
      || (tab[0] && tab[2]) || (tab[3] && !tab[7]))
    return (ERROR);
  return (0);
}

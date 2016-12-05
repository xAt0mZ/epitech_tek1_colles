/*
** main.c for text_count in /home/baron_l//local/rendu/projets/Colle/colle6
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue May 28 09:06:20 2013 louis-philippe baron
** Last update Tue May 28 12:30:03 2013 louis-philippe baron
*/

#include	<stdlib.h>
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

int		loop(int *booltab)
{
  char		*str;
  char		*param;

  if ((str = get_next_line(0)) == NULL
      || (param = get_next_line(0)) == NULL)
    {
      my_putstr("Malloc fail\n");
      return (ERROR);
    }
  if (param[0] == 0)
    text_count(str, booltab);
  else
    text_count_2(str, param, booltab);
  free(str);
  free(param);
  return (0);
}

int		text_count(char *str, int *booltab)
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
  if (booltab[0])
    print_toption(tab, booltab[2], booltab[3], 0);
  else if (booltab[1])
    print_roption(tab, booltab[2], booltab[3], 0);
  else
    print_tab(tab, booltab[2], booltab[3], 0);
  return (0);
}

int		text_count_2(char *str, char *param, int *booltab)
{
  int		tab[95];
  int		i;

  my_memset(tab);
  i = 0;
  while (str[i])
    {
      if (str[i] >= ' ' && str[i] <= '~' && is_in(str[i], param) == 0)
	tab[(int)str[i] - 32] += 1;
      i++;
    }
  if (booltab[0])
    print_toption(tab, booltab[2], booltab[3], my_strlen(param));
  else if (booltab[1])
    print_roption(tab, booltab[2], booltab[3], my_strlen(param));
  else
    print_tab(tab, booltab[2], booltab[3], my_strlen(param));
  return (0);
}

int		main(int ac, char **av)
{
  int		booltab[8];

  if (check_args(ac, av, booltab) == ERROR)
    return (ERROR);
  if (booltab[5] == 0)
    {
      my_putstr("No str entered\n");
      return (0);
    }
  if (booltab[5] == 1)
    text_count(av[booltab[6]], booltab);
  else if (booltab[5] == 2)
    text_count_2(av[booltab[6]], av[booltab[7]], booltab);
  else
    {
      my_putstr("Enter only 2 [STR]\n");
      return (ERROR);
    }
  while (booltab[4])
    if (loop(booltab) == ERROR)
      return (ERROR);
  return (0);
}

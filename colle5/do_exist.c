/*
** do_exist.c for mastermind in /home/baron_l//local/rendu/projets/Colle/colle5
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue May 21 10:04:23 2013 louis-philippe baron
** Last update Tue May 21 11:27:52 2013 louis-philippe baron
*/

#include	"hmastermind.h"

int	select_check(char c)
{
  if (c == 'p')
    return (0);
  else if (c == 't')
    return (1);
  else if (c == 's')
    return (2);
  else if (c == 'c')
    return (3);
  return (0);
}

static int	check_exist(char *str, char c)
{
  int		i;

  i = 0;
  while (str[i])
    {
      if (str[i] == c)
	return (0);
      i++;
    }
  return (ERROR);
}

int		do_exist(char *option, char *val)
{
  int           (*checks[4])(char *);
  int		i;

  if (my_strlen(option) != 2 || option[0] != '-'
      || check_option("cpts", option[1]) == ERROR)
    {
      my_putstr("Invalid option :");
      my_putstr(option);
      my_putchar('\n');
      return (ERROR);
    }
  checks[0] = &check_p;
  checks[1] = &check_t;
  checks[2] = &check_s;
  i = select_check(option[1]);
  if (checks[i](val) == ERROR)
    return (ERROR);
  return (0);
}


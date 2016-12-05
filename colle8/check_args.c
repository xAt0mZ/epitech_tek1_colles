/*
** check_args.c for minicut in /home/baron_l//local/rendu/projets/Colle/colle8
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Thu Jun 13 11:03:09 2013 louis-philippe baron
** Last update Thu Jun 13 12:14:30 2013 louis-philippe baron
*/

#include	"hminicut.h"

static int	my_strcmp(char *s1, char *s2)
{
  int		i;

  i = 0;
  while (s1[i] && s2[i])
    {
      if (s1[i] != s2[i])
	return (ERROR);
      i++;
    }
  if (s1[i] || s2[i])
    return (ERROR);
  return (0);
}

static int	check_rows(char *str)
{
  int		i;

  i = 0;
  if (str[i] == '-' || str[i] == ',' || str[i] == '\0')
    return (ERROR);
  while (str[i])
    {
      if ((str[i] == '-' || str[i] == ',')
	  && !(str[i + 1] >= '0' && str[i + 1] <= '9'))
	return (ERROR);
      if (!(str[i] >= '0' && str[i] <= '9')
	  && str[i] != '-' && str[i] != ',')
	return (ERROR);
      i++;
    }
  if (str[i - 1] == '-' || str[i - 1] == ',')
    return (ERROR);
  return (0);
}

static int	check_delim(char *str)
{
  int		i;

  i = my_strlen(str);
  if (i > 1)
    {
      my_putstr("Too much characters for 2nd param : delim");
      my_putstr(" : should be a single char\n");
      return (ERROR);
    }
  return (0);
}

int		checkArgs3(char **av)
{
  if (my_strcmp(av[1], "-c") == ERROR)
    {
      my_putstr("Invalid 1st arg : should have been -c\n");
      return (ERROR);
    }
  if (check_rows(av[2]) == ERROR)
    {
      my_putstr("Invalid row args as 2nd param\n");
      return (ERROR);
    }
  return (0);
}

int		checkArgs5(char **av)
{
  if (my_strcmp(av[1], "-d") == ERROR)
    {
      my_putstr("Invalid 1st arg : should have been -d\n");
      return (ERROR);
    }
  if (check_delim(av[2]) == ERROR)
    return (ERROR);
  if (my_strcmp(av[3], "-f") == ERROR)
    {
      my_putstr("Invalid 3rd arg : should have been -f\n");
      return (ERROR);
    }
  if (check_rows(av[4]) == ERROR)
    {
      my_putstr("Invalid row args as 4th param\n");
      return (ERROR);
    }
  return (0);
}

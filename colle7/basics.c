/*
** basics.c for morpion in /home/baron_l//local/rendu/projets/Colle/colle7
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Jun  4 10:24:22 2013 louis-philippe baron
** Last update Tue Jun  4 12:54:47 2013 louis-philippe baron
*/

#include	<unistd.h>
#include	"hmorpion.h"

void		my_putchar(char c)
{
  write(1, &c, 1);
}

int		my_putstr(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      my_putchar(str[i]);
      i++;
    }
  return (0);
}

int		my_strcmp(char *s1, char *s2)
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

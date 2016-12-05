/*
** basics.c for minicut in /home/baron_l//local/rendu/projets/Colle/colle8
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Thu Jun 13 09:14:34 2013 louis-philippe baron
** Last update Thu Jun 13 10:28:49 2013 louis-philippe baron
*/

#include	<unistd.h>
#include	"hminicut.h"

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

int		my_getnbr(char *str)
{
  int		i;
  int		nb;

  i = 0;
  nb = 0;
  while (str[i] && str[i] >= '0' && str[i] <= '9')
    {
      nb = nb * 10 + (str[i] - '0');
      i++;
    }
  return (nb);
}

int		my_memset(char *str, int size)
{
  int		i;

  i = 0;
  while (i < size - 1)
    {
      str[i] = '0';
      i++;
    }
  str[i] = 0;
  return (0);
}

int		my_strlen(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

/*
** basics2.c for text_count in /home/baron_l//local/rendu/projets/Colle/colle6/partie3
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue May 28 09:56:48 2013 louis-philippe baron
** Last update Tue May 28 12:47:38 2013 louis-philippe baron
*/

#include	"htext.h"

int		find_max(int *tab)
{
  int		i;
  int		res;

  i = 0;
  res = -1;
  while (i < 95)
    {
      if (tab[i] > res)
	res = tab[i];
      i++;
    }
  return (res);
}

int		my_strcmp(char *s1, char *s2)
{
  int		i;

  i = 0;
  while (s1[i] && s2[i])
    {
      if (s1[i] != s2[i])
	return (1);
      i++;
    }
  if (s1[i] || s2[i])
    return (1);
  return (0);
}

int		put_res(int i, int nb, int stat)
{
  my_putchar((char)i + 32);
  my_putchar(':');
  my_putnbr(nb);
  my_putchar('\n');
  return (0);
}

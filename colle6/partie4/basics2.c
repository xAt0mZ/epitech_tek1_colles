/*
** basics2.c for text_count in /home/baron_l//local/rendu/projets/Colle/colle6/partie3
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue May 28 09:56:48 2013 louis-philippe baron
** Last update Tue May 28 10:35:08 2013 louis-philippe baron
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

int		put_res(int i, int nb)
{
  my_putchar((char)i + 32);
  my_putstr(" : ");
  my_putnbr(nb);
  my_putchar('\n');
  return (0);
}

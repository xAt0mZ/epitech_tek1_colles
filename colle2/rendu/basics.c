/*
** basics.c for calculator in /home/baron_l//local/rendu/projets/Colle/colle2/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Apr 30 12:11:39 2013 louis-philippe baron
** Last update Tue Apr 30 12:14:41 2013 louis-philippe baron
*/

#include	"hcalculator.h"

int		my_putnbr(int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb *= -1;
    }
  if (nb > 9)
    my_putnbr(nb / 10);
  my_putchar(nb % 10 + '0');
  return (0);
}

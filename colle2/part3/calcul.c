/*
** calcul.c for calcul in /home/mantez_p//calculator
** 
** Made by paul mantez
** Login   <mantez_p@pc-mantez_p>
** 
** Started on  Tue Apr 30 09:12:36 2013 paul mantez
** Last update Tue Apr 30 10:47:49 2013 louis-philippe baron
*/

#include	"hcalculator.h"

int		add(int a, int b)
{
  int		c;

  c = a + b;
  return (c);
}

int		sub(int a, int b)
{
  int		c;

  c = a - b;
  return (c);
}

int		multi(int a, int b)
{
  int		c;

  c = a * b;
  return (c);
}

int		division(int a, int b)
{
  int		c;

  if (b == 0)
    {
      my_putstr("Error : division by 0");
      exit(ERROR);
    }
  c = a / b;
  return (c);
}

int		mod(int a, int b)
{
  int		c;

  if (b == 0)
    {
      my_putstr("Error : division by 0");
      exit(ERROR);
    }
  c = a % b;
  return (c);
}

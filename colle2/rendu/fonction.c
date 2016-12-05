/*
** fonction.c for fonction in /home/mantez_p//calculator
** 
** Made by paul mantez
** Login   <mantez_p@pc-mantez_p>
** 
** Started on  Tue Apr 30 09:49:37 2013 paul mantez
** Last update Tue Apr 30 11:36:19 2013 louis-philippe baron
*/

#include	"hcalculator.h"

void		my_putchar(char c)
{
  write(1, &c, 1);
}

void		my_putstr(char *str)
{
  int		i;

  i = 0;
  while (str[i] != 0)
    {
      my_putchar(str[i]);
      i++;
    }
}

int		my_strlen(char *str)
{
  int		i;

  i = 0;
  while (str[i] != 0)
    i++;
  return (i);
}

int		my_getnbr(char *str)
{
  int		i;
  int		res;
  int		a;

  i = 0;
  res = 0;
  a = 1;
  if (str[i] == '-')
    {
      a = -1;
      i++;
    }
  while (str[i] != 0)
    {
      res = res * 10 + (str[i] - '0');
      i++;
    }
  return (res * a);
}

int		tab_len(char **tab)
{
  int		a;

  a = 0;
  while (tab[a])
    a++;
  return (a);
}

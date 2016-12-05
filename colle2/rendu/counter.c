/*
** counter.c for counter in /home/mantez_p//calculator
** 
** Made by paul mantez
** Login   <mantez_p@pc-mantez_p>
** 
** Started on  Tue Apr 30 12:29:20 2013 paul mantez
** Last update Tue Apr 30 13:03:35 2013 louis-philippe baron
*/

#include	"hcalculator.h"

int		counter(char *str)
{
  int		i;
  int		j;

  i = 0;
  j = 0;
  while (str[i])
    {
      if (str[i] == '(')
	j++;
      if (str[i] == ')')
	j--;
      i++;
    }
  if (j == 0)
    return (0);
  else
    {
      my_putstr("Error with the number of parenthesis\n");
      exit(ERROR);
    }
}

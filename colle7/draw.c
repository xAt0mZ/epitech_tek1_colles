/*
** draw.c for draw in /home/mantez_p//colle7
** 
** Made by paul mantez
** Login   <mantez_p@pc-mantez_p>
** 
** Started on  Tue Jun  4 09:43:33 2013 paul mantez
** Last update Tue Jun  4 11:44:48 2013 louis-philippe baron
*/

#include	"hmorpion.h"

int		draw()
{
  my_putstr("Match nul\nVeux tu rejouer ? y / n\n");
  return (0);
}

int		victory(char *str, int starter)
{
  if (starter == HUMAN)
    {
      my_putstr("Bravo ");
      my_putstr(str);
      my_putstr(", tu es victorieux ! Felicitations !\n");
    }
  else
    my_putstr("L'ordinateur a gagné, tu as perdu\n");
  my_putstr("Veux tu rejouer ? y / n\n");
  return (0);
}

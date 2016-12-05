/*
** color.c for color in /home/mantez_p//colle7
** 
** Made by paul mantez
** Login   <mantez_p@pc-mantez_p>
** 
** Started on  Tue Jun  4 09:11:15 2013 paul mantez
** Last update Tue Jun  4 12:54:31 2013 louis-philippe baron
*/

#include	"hmorpion.h"

int		color(char c)
{
  my_putstr("\033[32m");
  my_putchar(c);
  my_putstr("\033[0m");
  return (0);
}

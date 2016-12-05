/*
** define_starter.c for morpion in /home/baron_l//local/rendu/projets/Colle/colle7
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Jun  4 09:57:48 2013 louis-philippe baron
** Last update Tue Jun  4 12:55:20 2013 louis-philippe baron
*/

#include	<time.h>
#include	<stdlib.h>
#include	"hmorpion.h"

int		define_starter(char **tab)
{
  int		ret;

  srand(time(0));
  ret = rand();
  ret %= 2;
  if (ret == 0)
    my_putstr("Le bot commence, tu as les pions O\n");
  else
    {
      my_putstr("Tu commences, tu as les pions X\n");
      show_tab(tab);
    }
  return (ret);
}

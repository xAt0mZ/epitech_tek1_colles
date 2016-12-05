/*
** put_victory.c for morpion in /home/baron_l//local/rendu/projets/Colle/colle7
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Jun  4 10:19:05 2013 louis-philippe baron
** Last update Tue Jun  4 12:54:02 2013 louis-philippe baron
*/

#include	"hmorpion.h"

int		put_victory(int ret, char *str, char **tab)
{
  if (ret == 0)
    draw();
  else
    {
      victory(str, ret);
      show_last(tab);
    }
  return (0);
}

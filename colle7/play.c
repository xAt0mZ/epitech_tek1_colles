/*
** play.c for morpion in /home/baron_l//local/rendu/projets/Colle/colle7
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Jun  4 09:44:39 2013 louis-philippe baron
** Last update Tue Jun  4 12:53:40 2013 louis-philippe baron
*/

#include	"hmorpion.h"

static int	human_play(char *buffer, char **tab, int starter)
{
  int		x;
  int		y;

  x = buffer[0] - '0';
  y = buffer[2] - '0';
  if (starter == 0)
    tab[y][x] = 'O';
  else
    tab[y][x] = 'X';
  show_tab(tab);
  return (0);
}

int		play(char *buffer, char **tab, int starter)
{
  if (starter == 0)
    {
      human_play(buffer, tab, starter);
      if (is_a_win(tab) == 0)
	return (HUMAN);
    }
  else
    {
      human_play(buffer, tab, starter);
      if (is_a_win(tab) == 0)
	return (HUMAN);
      bot_play(tab, starter);
      if (is_a_win(tab) == 0)
	return (BOT);
    }
  return (0);
}

/*
** ia.c for ia in /home/mantez_p//colle7
** 
** Made by paul mantez
** Login   <mantez_p@pc-mantez_p>
** 
** Started on  Tue Jun  4 10:04:28 2013 paul mantez
** Last update Tue Jun  4 12:55:37 2013 louis-philippe baron
*/

#include	"hmorpion.h"

int		check_ia_ver(char **tab, char c)
{
  int		count;
  int		i;
  int		j;

  count = 0;
  i = 0;
  j = 0;
  while (tab[i][j] == c && i < 3)
    {
      i++;
      count++;
    }
  if (count == 2 && tab[i][j] == ' ')
    {
      tab[i][j] = c;
      return (1);
    }
  return (0);
}

int		check_ia_hor(char **tab, char c)
{
  int		count;
  int		i;
  int		j;

  count = 0;
  i = 0;
  j = 0;
  while (tab[i][j] == c && j < 3)
    {
      j++;
      count++;
    }
  if (count == 2 && tab[i][j] == ' ')
    {
      tab[i][j] = c;
      return (1);
    }
  return (0);
}

int		ia1(char **tab, char c, char v)
{
  int		x;

  x = 0;
  x = check_ia_hor(tab, c);
  if (x == 1)
    return (1);
  x = check_ia_ver(tab, c);
  if (x == 1)
    return (1);
  x = check_ial_hor(tab, c, v);
  if (x == 1)
    return (1);
  x = check_ial_hor(tab, c, v);
  if (x == 1)
    return (1);
  return (0);
}

int		bot_play(char **tab, int starter)
{
  char		c;
  char		v;
  int		x;

  if (starter == 1)
    {
      c = 'O';
      v = 'X';
    }
  if (starter == 0)
    {
      c = 'X';
      v = 'O';
    }
  x = ia1(tab, c, v);
  if (x != 1)
    complete(tab, c, starter);
  show_tab(tab);
  return (0);
}

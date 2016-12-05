/*
** computer.c for computer in /home/mantez_p//colle7
** 
** Made by paul mantez
** Login   <mantez_p@pc-mantez_p>
** 
** Started on  Tue Jun  4 09:51:28 2013 paul mantez
** Last update Tue Jun  4 12:07:31 2013 louis-philippe baron
*/

#include	"hmorpion.h"

static int	check_victory_diag(char **tab, char c)
{
  int		j;
  int		i;

  j = 0;
  i = 0;
  while (i < 3 && j < 3 && tab[j][i] == c)
    {
      j++;
      i++;
    }
  if (i == 3 && j == 3)
    return (0);
  j = 0;
  i = 2;
  while (i >= 0 && j < 3 && tab[j][i] == c)
    {
      j++;
      i--;
    }
  if (i == -1 && j == 3)
    return (0);
  return (ERROR);
}

static int	check_victory_ver(char **tab, char c)
{
  int		j;
  int		i;

  i = 0;
  while (i < 3)
    {
      j = 0;
      while (j < 3 && tab[j][i] == c)
	j++;
      if (j == 3)
	return (0);
      i++;
    }
  return (ERROR);
}

static int	check_victory_hor(char **tab)
{
  int		j;

  j = 0;
  while (j < 3)
    {
      if (my_strcmp(tab[j], "XXX") == 0 || my_strcmp(tab[j], "OOO") == 0)
	return (0);
      j++;
    }
  return (ERROR);
}


int		is_a_win(char **tab)
{
  if (check_victory_hor(tab) == 0)
    return (0);
  if (check_victory_ver(tab, 'O') == 0)
    return (0);
  if (check_victory_ver(tab, 'X') == 0)
    return (0);
  if (check_victory_diag(tab, 'O') == 0)
    return (0);
  if (check_victory_diag(tab, 'X') == 0)
    return (0);
  return (ERROR);
}

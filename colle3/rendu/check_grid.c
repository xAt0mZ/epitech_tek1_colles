/*
** check_grid.c for check_grid in /home/mantez_p//mixword
** 
** Made by paul mantez
** Login   <mantez_p@pc-mantez_p>
** 
** Started on  Tue May  7 10:32:39 2013 paul mantez
** Last update Tue May  7 12:51:30 2013 louis-philippe baron
*/

#include	"hmix.h"

int		check_up_right(char **tab, int i, int j, char *str)
{
  int		a;
  int		ip;
  int		jp;

  ip = i;
  jp = j;
  a = 0;
  while (i >= 0 && tab[i][j] && str[a])
    {
      if (tab[i][j] != str[a])
	return (ERROR);
      i--;
      j++;
      a++;
    }
  if (str[a] != 0)
    return (ERROR);
  show_up_right(tab, ip, jp, my_strlen(str));
  return (0);
}

int		check_up_left(char **tab, int i, int j, char *str)
{
  int		a;
  int		ip;
  int		jp;

  ip = i;
  jp = j;
  a = 0;
  while (i >= 0 && j >= 0 && str[a])
    {
      if (tab[i][j] != str[a])
	return (ERROR);
      i--;
      j--;
      a++;
    }
  if (str[a] != 0)
    return (ERROR);
  show_up_left(tab, ip, jp, my_strlen(str));
  return (0);
}

int		check_down_right(char **tab, int i, int j, char *str)
{
  int		a;
  int		ip;
  int		jp;

  ip = i;
  jp = j;
  a = 0;
  while (tab[i] && tab[i][j] && str[a])
    {
      if (tab[i][j] != str[a])
	return (ERROR);
      i++;
      j++;
      a++;
    }
  if (str[a] != 0)
    return (ERROR);
  show_down_right(tab, ip, jp, my_strlen(str));
  return (0);
}

int		check_down_left(char **tab, int i, int j, char *str)
{
  int		a;
  int		ip;
  int		jp;

  ip = i;
  jp = j;
  a = 0;
  while (tab[i] && j >= 0 && str[a])
    {
      if (tab[i][j] != str[a])
	return (ERROR);
      i++;
      j--;
      a++;
    }
  if (str[a] != 0)
    return (ERROR);
  show_down_left(tab, ip, jp, my_strlen(str));
  return (0);
}

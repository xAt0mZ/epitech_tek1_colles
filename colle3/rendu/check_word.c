/*
** check_word.c for check_word in /home/mantez_p//mixword
** 
** Made by paul mantez
** Login   <mantez_p@pc-mantez_p>
** 
** Started on  Tue May  7 09:54:49 2013 paul mantez
** Last update Tue May  7 12:51:09 2013 louis-philippe baron
*/

#include	"hmix.h"

int		check_word(char **tab, char *str)
{
  int		i;
  int		j;

  i = 0;
  while (tab[i])
    {
      j = 0;
      while (tab[i][j])
	{
	  if (tab[i][j] == str[0] &&
	      (check_right(tab, i, j, str) == 0
	       || check_up(tab, i, j, str) == 0
	       || check_down(tab, i, j, str) == 0
	       || check_left(tab, i, j, str) == 0
	       || check_up_right(tab, i, j, str) == 0
	       || check_up_left(tab, i, j, str) == 0
	       || check_down_right(tab, i, j, str) == 0
	       || check_down_left(tab, i, j, str) == 0))
	    return (0);
	  j++;
	}
      i++;
    }
  return (ERROR);
}

int		check_right(char **tab, int i, int j, char *str)
{
  int		a;
  int		jp;

  a = 0;
  jp = j;
  while (tab[i][j] && str[a])
    {
      if (tab[i][j] != str[a])
	return (ERROR);
      j++;
      a++;
    }
  if (str[a] != 0)
    return (ERROR);
  show_by_right(tab, i, jp, my_strlen(str));
  return (0);
}

int		check_left(char **tab, int i, int j, char *str)
{
  int		a;
  int		jp;

  a = 0;
  jp = j;
  while (j >= 0 && str[a])
    {
      if (tab[i][j] != str[a])
	return (ERROR);
      j--;
      a++;
    }
  if (str[a] != 0)
    return (ERROR);
  show_by_left(tab, i, jp, my_strlen(str));
  return (0);
}

int		check_up(char **tab, int i, int j, char *str)
{
  int		a;
  int		ip;

  a = 0;
  ip = i;
  while (i >= 0 && str[a])
    {
      if (tab[i][j] != str[a])
	return (ERROR);
      i--;
      a++;
    }
  if (str[a] != 0)
    return (ERROR);
  show_up(tab, ip, j, my_strlen(str));
  return (0);
}

int		check_down(char **tab, int i, int j, char *str)
{
  int		a;
  int		ip;

  a = 0;
  ip = i;
  while (tab[i] && str[a])
    {
      if (tab[i][j] != str[a])
	return (ERROR);
      i++;
      a++;
    }
  if (str[a] != 0)
    return (ERROR);
  show_down(tab, ip, j, my_strlen(str));
  return (0);
}

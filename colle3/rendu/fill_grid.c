/*
** fill_grid.c for my_mixword in /home/baron_l//local/rendu/projets/Colle/colle3/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue May  7 11:21:30 2013 louis-philippe baron
** Last update Tue May  7 12:22:56 2013 louis-philippe baron
*/

#include	"hmix.h"

static int	copy(char *file, char *grid)
{
  int		i;

  i = 0;
  while (file[i])
    {
      grid[i] = file[i];
      i++;
    }
  return (0);
}

int		fill_grid(char **file, char **grid, int size)
{
  int		kf;
  int		kg;
  int		len;

  kf = 0;
  kg = 0;
  while (file[kf] && kg < size)
    {
      len = my_strlen(file[kf]);
      if (len <= size && len > 0)
	{
	  copy(file[kf], grid[kg]);
	  kg++;
	}
      kf++;
    }
  return (0);
}

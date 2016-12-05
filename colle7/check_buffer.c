/*
** check_buffer.c for morpion in /home/baron_l//local/rendu/projets/Colle/colle7
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Jun  4 09:25:42 2013 louis-philippe baron
** Last update Tue Jun  4 12:54:59 2013 louis-philippe baron
*/

#include	<unistd.h>
#include	"hmorpion.h"

static int	check_position(char *buffer, char **tab)
{
  int		x;
  int		y;

  x = (int)buffer[0] - '0';
  y = (int)buffer[2] - '0';
  if (tab[y][x] != ' ')
    {
      my_putstr("Enter coords of an empty block of the map\n");
      return (ERROR);
    }
  return (0);
}

int		check_buffer(char *buffer, int size, char **tab)
{
  int		rd;

  if (size != 4)
    {
      my_putstr("Invalid line entered\n");
      return (1);
    }
  if (!(buffer[0] >= '0' && buffer[0] <= '2') || buffer[1] != ','
      || !(buffer[0] >= '0' && buffer[0] <= '2') || buffer[3] != '\n')
    {
      rd = 1;
      my_putstr("Invalid line entered\n");
      while (rd && rd != -1)
	rd = read(0, buffer, 3);
      return (rd == 0 ? ERROR : 2);
    }
  if (check_position(buffer, tab) == ERROR)
    return (ERROR);
  return (0);
}

/*
** loop.c for my_mixword in /home/baron_l//local/rendu/projets/Colle/colle3/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue May  7 11:53:26 2013 louis-philippe baron
** Last update Tue May  7 12:26:46 2013 louis-philippe baron
*/

#include	"hmix.h"

int		loop(char **grid)
{
  char		*tmp;

  while (42)
    {
      my_putstr("----- Enter a word to find -----\n");
      if ((tmp = get_next_line(0)) == NULL)
	{
	  my_putstr("Get_next_line failed\n");
	  return (ERROR);
	}
      if (check_word(grid, tmp) == ERROR)
	my_putstr("Word not matched into the grid.\n");
      free(tmp);
    }
  return (0);
}

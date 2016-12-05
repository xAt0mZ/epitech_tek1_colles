/*
** create.c for create in /home/mantez_p//mixword
** 
** Made by paul mantez
** Login   <mantez_p@pc-mantez_p>
** 
** Started on  Tue May  7 09:27:07 2013 paul mantez
** Last update Tue May  7 10:52:28 2013 louis-philippe baron
*/

#include	"hmix.h"

char		**create_grid(int z)
{
  char		**tab;
  int		i;
  int		j;

  tab = malloc(sizeof(char *) * (z + 1));
  if (tab == NULL)
    return (NULL);
  i = 0;
  while (i < z)
    {
      if ((tab[i] = malloc((z + 1) * sizeof(char))) == NULL)
	return (NULL);
      j = 0;
      while (j < z)
	{
	  tab[i][j] = ' ';
	  j++;
	}
      tab[i][j] = 0;
      i++;
    }
  tab[i] = NULL;
  return (tab);
}

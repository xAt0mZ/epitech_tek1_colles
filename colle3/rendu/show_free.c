/*
** show_free.c for my_mixword in /home/baron_l//local/rendu/projets/Colle/colle3/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue May  7 09:47:04 2013 louis-philippe baron
** Last update Tue May  7 12:23:38 2013 louis-philippe baron
*/

#include	"hmix.h"

int		show_tab(char **tab)
{
  int		k;

  k = 0;
  while (tab[k])
    {
      my_putstr(tab[k]);
      my_putchar('\n');
      k++;
    }
  return (0);
}

int		free_tab(char **tab)
{
  int		k;

  k = 0;
  while (tab[k])
    {
      free(tab[k]);
      k++;
    }
  free(tab);
  return (0);
}

int		free_both(char **file, char **grid)
{
  free_tab(file);
  free_tab(grid);
  return (0);
}

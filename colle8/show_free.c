/*
** show_free.c for minicut in /home/baron_l//local/rendu/projets/Colle/colle8
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Thu Jun 13 09:35:19 2013 louis-philippe baron
** Last update Thu Jun 13 11:47:35 2013 louis-philippe baron
*/

#include	"hminicut.h"

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

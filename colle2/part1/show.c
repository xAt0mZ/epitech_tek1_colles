/*
** show.c for calculator in /home/baron_l//local/rendu/projets/Colle/colle2/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Apr 30 11:31:24 2013 louis-philippe baron
** Last update Tue Apr 30 11:37:39 2013 louis-philippe baron
*/

#include	"hcalculator.h"

int		show_tab(char **tab)
{
  int		k;

  k = 0;
  while (tab[k])
    {
      printf("{%s}\n", tab[k]);
      k++;
    }
  return (0);
}

int		show_list(t_list *list)
{
  while (list)
    {
      printf("{%d} {%d} {%c}\n", list->content, list->nb, list->operand);
      list = list->next;
    }
  printf("------\n");
  return (0);
}

/*
** my_free.c for my_free in /home/mantez_p//calculator
** 
** Made by paul mantez
** Login   <mantez_p@pc-mantez_p>
** 
** Started on  Tue Apr 30 10:05:42 2013 paul mantez
** Last update Tue Apr 30 11:44:17 2013 louis-philippe baron
*/

#include	"hcalculator.h"

int		my_free(t_list *list)
{
  t_list	*tmp1;
  t_list	*tmp2;

  tmp1 = list->prev->prev;
  tmp2 = list->next->next;
  free(list->prev);
  free(list->next);
  tmp1->next = list;
  tmp2->prev = list;
  list->prev = tmp1;
  list->next = tmp2;
  return (0);
}

int		free_list(t_list *list)
{
  t_list	*link;

  while (list)
    {
      link = list->next;
      free(list);
      list = link;
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

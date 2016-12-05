/*
** do_add.c for do_add in /home/mantez_p//calculator
** 
** Made by paul mantez
** Login   <mantez_p@pc-mantez_p>
** 
** Started on  Tue Apr 30 09:48:01 2013 paul mantez
** Last update Tue Apr 30 10:48:13 2013 louis-philippe baron
*/

#include	"hcalculator.h"

int		do_add(t_list **list)
{
  t_list	*tmp;

  tmp = *list;
  while (tmp)
    {
      if (tmp->content == 1 && (tmp->operand == '+' || tmp->operand == '-'))
	{
	  if (tmp->operand == '+')
	    tmp->nb = add(tmp->prev->nb, tmp->next->nb);
	  else if (tmp->operand == '-')
	    tmp->nb = sub(tmp->prev->nb, tmp->next->nb);
	  tmp->content = 0;
	  my_free(tmp);
	}
      tmp = tmp->next;
    }
  return (0);
}


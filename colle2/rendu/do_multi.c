/*
** do_multi.c for do_multi in /home/mantez_p//calculator
** 
** Made by paul mantez
** Login   <mantez_p@pc-mantez_p>
** 
** Started on  Tue Apr 30 09:31:27 2013 paul mantez
** Last update Tue Apr 30 12:30:49 2013 louis-philippe baron
*/

#include	"hcalculator.h"

int		do_multi(t_list **list)
{
  t_list	*tmp;

  tmp = *list;
  while (tmp)
    {
      if (tmp->content == OPERAND
	  && (tmp->operand == '*' || tmp->operand == '/'
	      || tmp->operand == '%'))
	{
	  if (tmp->operand == '*')
	    tmp->nb = multi(tmp->prev->nb, tmp->next->nb);
	  else if (tmp->operand == '/')
	    tmp->nb = division(tmp->prev->nb, tmp->next->nb);
	  else if (tmp->operand == '%')
	    tmp->nb = mod(tmp->prev->nb, tmp->next->nb);
	  tmp->content = 0;
	  my_free(tmp);
	}
      tmp = tmp->next;
    }
  return (0);
}

int		do_multi_parenthesis(t_list **list)
{
  t_list	*tmp;

  tmp = *list;
  while (tmp && tmp->operand != ')')
    {
      if (tmp->content == OPERAND
	  && (tmp->operand == '*' || tmp->operand == '/'
	      || tmp->operand == '%'))
	{
	  if (tmp->operand == '*')
	    tmp->nb = multi(tmp->prev->nb, tmp->next->nb);
	  else if (tmp->operand == '/')
	    tmp->nb = division(tmp->prev->nb, tmp->next->nb);
	  else if (tmp->operand == '%')
	    tmp->nb = mod(tmp->prev->nb, tmp->next->nb);
	  tmp->content = 0;
	  my_free(tmp);
	}
      tmp = tmp->next;
    }
  return (0);
}

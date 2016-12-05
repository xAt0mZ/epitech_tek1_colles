/*
** get_exp.c for calculator in /home/baron_l//local/rendu/projets/Colle/colle2/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Apr 30 09:52:54 2013 louis-philippe baron
** Last update Tue Apr 30 12:18:22 2013 louis-philippe baron
*/

#include	"hcalculator.h"

static	int	set_before(t_list **list)
{
  t_list	*tmp;
  t_list	*elem;

  elem = *list;
  elem->prev = NULL;
  tmp = elem;
  elem = elem->next;
  while (elem)
    {
      elem->prev = tmp;
      tmp = elem;
      elem = elem->next;
    }
  return (0);
}

static int	add_list(t_list **list, char *str)
{
  t_list	*elem;

  if ((elem = malloc(sizeof(*elem))) == NULL)
    return (ERROR);
  elem->next = *list;
  if ((str[0] == '+' || str[0] == '-' || str[0] == '*' || str[0] == '/'
       || str[0] == '%' || str[0] == '(' || str[0] == ')') && str[1] == '\0')
    {
      elem->content = OPERAND;
      elem->operand = str[0];
      elem->nb = 0;
    }
  else
    {
      elem->content = NB;
      elem->operand = 0;
      elem->nb = my_getnbr(str);
    }
  *list = elem;
  return (0);
}

t_list		*get_exp(char *str)
{
  t_list	*list;
  char		**tmp;
  int		k;

  if ((tmp = my_str_to_wordtab(str, "+-*/%()")) == NULL)
    return (NULL);
  list = NULL;
  k = tab_len(tmp) - 1;
  while (k >= 0)
    {
      if (add_list(&list, tmp[k]) == ERROR)
  	return (NULL);
      k--;
    }
  free_tab(tmp);
  set_before(&list);
  return (list);
}

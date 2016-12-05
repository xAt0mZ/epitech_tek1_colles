/*
** main.c for calculator in /home/baron_l//local/rendu/projets/Colle/colle2/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Apr 30 09:09:57 2013 louis-philippe baron
** Last update Tue Apr 30 13:02:16 2013 louis-philippe baron
*/

#include	"hcalculator.h"

static int	parenthesis(t_list *list)
{
  while (list)
    {
      if (list->content == OPERAND
	  && (list->operand == '(' || list->operand == ')'))
	return (0);
      list = list->next;
    }
  return (ERROR);
}

static int	parenthesis_loop(t_list **list)
{
  t_list	*tmp;

  while (parenthesis(*list) == 0)
    {
      tmp = *list;
      while (tmp && tmp->operand != ')')
	tmp = tmp->next;
      while (tmp && tmp->operand != '(')
	tmp = tmp->prev;
      do_multi_parenthesis(&tmp);
      do_add_parenthesis(&tmp);
      if (tmp->next)
	my_free(tmp->next);
    }
  return (0);
}

static int	calculator(char *str)
{
  t_list	*list;
  int		res;

  if (str[0] == '\0')
    {
      my_putstr("Usage : ./calculator \"expression\"\n");
      return (0);
    }
  if (check_validity(str) == ERROR)
    return (ERROR);
  if ((list = get_exp(str)) == NULL)
    {
      my_putstr("Problem in memory allocation during exp parsing\n");
      return (ERROR);
    }
  parenthesis_loop(&list);
  do_multi(&list);
  res = do_add(&list);
  my_putnbr(res);
  my_putchar('\n');
  free_list(list);
  return (0);
}

int		main(int ac, char **av)
{
  if (ac == 2)
    {
      if (calculator(av[1]) == ERROR)
	return (ERROR);
    }
  else
    my_putstr("Usage : ./calculator \"expression\"\n");
  return (0);
}

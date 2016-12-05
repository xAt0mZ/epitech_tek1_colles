/*
** check_validity.c for calculator in /home/baron_l//local/rendu/projets/Colle/colle2/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Apr 30 09:16:39 2013 louis-philippe baron
** Last update Tue Apr 30 12:58:24 2013 louis-philippe baron
*/

#include	"hcalculator.h"

static int	check_content(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      if (!(str[i] >= '0' && str[i] <= '9')
	  && str[i] != '+' && str[i] != '-' && str[i] != '*'
	  && str[i] != '/' && str[i] != '%'
	  && str[i] != '(' && str[i] != ')')
	{
	  my_putstr("Invalid character in expression\n");
	  return (ERROR);
	}
      i++;
    }
  return (0);
}

static int	check_operands(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      if ((str[i] == '+' || str[i] == '-' || str[i] == '*'
	   || str[i] == '/' || str[i] == '%')
	  && (str[i + 1] == '+' || str[i + 1] == '-' || str[i + 1] == '*'
	      || str[i + 1] == '/' || str[i + 1] == '%'))
	{
	  my_putstr("Syntax error : 2 operands together\n");
	  return (ERROR);
	}
      i++;
    }
  return (0);
}

static int	check_first_last(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      if (i == 0 && (str[i] == '+' || str[i] == '-' || str[i] == '*'
		     || str[i] == '/' || str[i] == '%'))
	{
	  my_putstr("Syntax error : first char is operand\n");
	  return (ERROR);
	}
      else if (str[i + 1] == '\0'
	       && (str[i] == '+' || str[i] == '-' || str[i] == '*'
		|| str[i] == '/' || str[i] == '%'))
	{
	  my_putstr("Syntax error : last char is operand\n");
	  return (ERROR);
	}
      i++;
    }
  return (0);
}

static int	check_left(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      if ((i && str[i] == '(' && (str[i - 1] >= '0' && str[i - 1] <= '9'))
	  || (str[i + 1] && str[i] == ')'
	      && (str[i + 1] >= '0' && str[i + 1] <= '9')))
	{
	  my_putstr("Syntax error\n");
	  return (ERROR);
	}
      i++;
    }
  return (0);
}

int		check_validity(char *str)
{
  if (check_content(str) == ERROR
      || check_operands(str) == ERROR
      || check_first_last(str) == ERROR
      || counter(str) == ERROR
      || check_left(str) == ERROR)
    return (ERROR);
  return (0);
}

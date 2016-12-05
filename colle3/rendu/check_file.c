/*
** check_file.c for my_mixword in /home/baron_l//local/rendu/projets/Colle/colle3/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue May  7 10:33:06 2013 louis-philippe baron
** Last update Tue May  7 12:24:49 2013 louis-philippe baron
*/

#include	"hmix.h"

static int	check_length(char **file)
{
  int		k;
  int		empty;

  k = 0;
  empty = 0;
  while (file[k])
    {
      if (my_strlen(file[k]) == 0)
	empty++;
      k++;
    }
  if (k == 0 || empty + 1 == k)
    {
      my_putstr("Empty file entered\n");
      return (ERROR);
    }
  return (0);
}

static int	check_content(char **file)
{
  int		i;
  int		j;

  j = 0;
  while (file[j])
    {
      i = 0;
      while (file[j][i])
	{
	  if (!(file[j][i] >= 'a' && file[j][i] <= 'z'))
	    {
	      my_putstr("Invalid character line ");
	      my_putnbr(j + 1);
	      my_putstr(" char ");
	      my_putnbr(i + 1);
	      my_putchar('\n');
	      return (ERROR);
	    }
	  i++;
	}
      j++;
    }
  return (0);
}

int		check_file(char **file)
{
  if (check_length(file) == ERROR
      || check_content(file) == ERROR)
    return (ERROR);
  return (0);
}

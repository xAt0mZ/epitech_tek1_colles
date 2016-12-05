/*
** option_d.c for minicut in /home/baron_l//local/rendu/projets/Colle/colle8
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Thu Jun 13 09:20:56 2013 louis-philippe baron
** Last update Thu Jun 13 12:25:02 2013 louis-philippe baron
*/

#include	"hminicut.h"

static int	mySpecialTabPrint(char **tab, char *rows, char delim)
{
  int		k;
  int		max;
  int		j;

  k = 0;
  j = 0;
  max = my_strlen(rows);
  if (tab[0] && !tab[1])
    {
      my_putstr(tab[0]);
      return (0);
    }
  while (tab[k])
    {
      if (k < max && rows[k] == '1')
	{
	  if (j && is_in('1', &(rows[k])) == 0)
	    my_putchar(delim);
	  my_putstr(tab[k]);
	  j++;
	}
      k++;
    }
  return (0);
}

int		option_d(char *delim, char *row)
{
  char		**tab;
  char		*line;
  char		*rows;

  if ((rows = get_rows(row)) == NULL)
    return (ERROR);
  while ((line = get_next_line(0)))
    {
      if ((tab = my_str_to_wordtab(line, delim)) == NULL)
	{
	  my_putstr("Malloc error\n");
	  return (ERROR);
	}
      free(line);
      mySpecialTabPrint(tab, rows, delim[0]);
      my_putchar('\n');
      free_tab(tab);
    }
  free(rows);
  return (0);
}

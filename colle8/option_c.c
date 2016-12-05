/*
** option_c.c for minicut in /home/baron_l//local/rendu/projets/Colle/colle8
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Thu Jun 13 09:19:24 2013 louis-philippe baron
** Last update Thu Jun 13 10:54:44 2013 louis-philippe baron
*/

#include	"hminicut.h"

static int	mySpecialPutstr(char *str, char *rows)
{
  int		i;
  int		max;

  i = 0;
  max = my_strlen(rows);
  while (str[i])
    {
      if (i < max && rows[i] == '1')
	my_putchar(str[i]);
      i++;
    }
  my_putchar('\n');
  return (0);
}

int		option_c(char *str)
{
  char		*line;
  char		*rows;

  if ((rows = get_rows(str)) == NULL)
    return (ERROR);
  while ((line = get_next_line(0)))
    {
      mySpecialPutstr(line, rows);
      free(line);
    }
  free(rows);
  return (0);
}

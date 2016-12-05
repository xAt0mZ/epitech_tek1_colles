/*
** get_rows.c for minicut in /home/baron_l//local/rendu/projets/Colle/colle8
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Thu Jun 13 09:50:26 2013 louis-philippe baron
** Last update Thu Jun 13 10:47:40 2013 louis-philippe baron
*/

#include	"hminicut.h"

static char	*fill_rows(char *res, char *str)
{
  int		i;
  int		k;
  int		nb;

  i = 0;
  while (str[i])
    {
      k = my_getnbr(&(str[i]));
      res[k - 1] = '1';
      while (str[i] && str[i] >= '0' && str[i] <= '9')
	i++;
      if (str[i] == '-')
	{
	  nb = my_getnbr(&(str[i + 1]));
	  while (k < nb)
	    {
	      res[k - 1] = '1';
	      k++;
	    }
	}
      if (str[i] == ',' || str[i] == '-')
	i++;
    }
  return (res);
}

char		*get_rows(char *str)
{
  char		*res;
  int		i;
  int		size;

  i = my_strlen(str) - 1;
  while (str[i] >= '0' && str[i] <= '9')
    i--;
  size = my_getnbr(&(str[i + 1]));
  if ((res = malloc((size + 1) * sizeof(char))) == NULL)
    {
      my_putstr("Malloc failed\n");
      return (NULL);
    }
  my_memset(res, size + 1);
  res = fill_rows(res, str);
  return (res);
}

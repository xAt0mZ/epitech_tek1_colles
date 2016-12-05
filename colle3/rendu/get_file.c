/*
** get_file.c for my_mixword in /home/baron_l//local/rendu/projets/Colle/colle3/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue May  7 09:51:58 2013 louis-philippe baron
** Last update Tue May  7 12:24:33 2013 louis-philippe baron
*/

#include	"hmix.h"

static char	**my_realloc(char **tab, char *tmp)
{
  char		**res;
  int		k;

  k = 0;
  while (tab[k])
    k++;
  if ((res = malloc((k + 2) * sizeof(char *))) == NULL)
    return (NULL);
  k = 0;
  while (tab[k])
    {
      res[k] = tab[k];
      k++;
    }
  res[k] = tmp;
  res[k + 1] = NULL;
  free(tab);
  return (res);
}

char		**get_file(int fd)
{
  char		**res;
  char		*tmp;

  if ((res = malloc(sizeof(char *))) == NULL)
    return (NULL);
  res[0] = NULL;
  while ((tmp = get_next_line(fd)))
    {
      if ((res = my_realloc(res, tmp)) == NULL)
	return (NULL);
    }
  close(fd);
  return (res);
}

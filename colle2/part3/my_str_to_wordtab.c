/*
** my_str_to_wordtab.c for calculator in /home/baron_l//local/rendu/projets/Colle/colle2/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Apr 30 10:02:55 2013 louis-philippe baron
** Last update Tue Apr 30 11:05:09 2013 louis-philippe baron
*/

#include	"hcalculator.h"

static int	is_in(char c, char *ops)
{
  int		i;

  i = 0;
  while (ops[i])
    {
      if (ops[i] == c)
	return (0);
      i++;
    }
  return (ERROR);
}

static char	*get_it(char *str, char	*operand, int *i)
{
  char		*res;
  int		j;
  int		k;

  j = *i;
  while (str[*i] && is_in(str[*i], operand) == ERROR)
    *i += 1;
  if ((res = malloc((*i - j + 1) * sizeof(char))) == NULL)
    return (NULL);
  k = 0;
  while (j < *i)
    res[k++] = str[j++];
  res[k] = '\0';
  return (res);
}

static char	*get_op(char *str, int *i)
{
  char		*res;

  if ((res = malloc(2 * sizeof(char))) == NULL)
    return (NULL);
  res[0] = str[*i];
  res[1] = '\0';
  return (res);
}

static char	**my_realloc(char **tab, char *str, char *operand, int *i)
{
  char		**res;
  int		k;

  k = tab_len(tab);
  if ((res = malloc((k + 3) * sizeof(char *))) == NULL)
    return (NULL);
  k = 0;
  while (tab[k])
    {
      res[k] = tab[k];
      k++;
    }
  if ((res[k] = get_it(str, operand, i)) == NULL)
    return (NULL);
  if ((res[k + 1] = get_op(str, i)) == NULL)
    return (NULL);
  res[k + 2] = NULL;
  if (res[k][0] == '\0')
    {
      free(res[k]);
      res[k] = res[k + 1];
      res[k + 1] = NULL;
    }
  free(tab);
  return (res);
}

char		**my_str_to_wordtab(char *str, char *operand)
{
  char		**res;
  int		i;

  if ((res = malloc(sizeof(char *))) == NULL)
    return (NULL);
  res[0] = NULL;
  i = 0;
  while (str[i])
    {
      if ((res = my_realloc(res, str, operand, &i)) == NULL)
	return (NULL);
      if (str[i])
	i++;
    }
  i = tab_len(res) - 1;
  if (res[i][0] == '\0')
    {
      free(res[i]);
      res[i] = NULL;
    }
  return (res);
}

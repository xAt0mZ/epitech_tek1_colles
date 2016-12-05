/*
** my_str_to_wordtab.c for minicut in /home/baron_l//local/rendu/projets/Colle/colle8
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Thu Jun 13 09:29:47 2013 louis-philippe baron
** Last update Thu Jun 13 12:40:28 2013 louis-philippe baron
*/

#include	<stdlib.h>
#include	"hminicut.h"

int	is_in(char c, char *params)
{
  int	i;

  i = 0;
  while (params[i])
    {
      if (params[i] == c)
	return (0);
      i++;
    }
  return (ERROR);
}

static char	*get_res(int k, int i, char *str)
{
  char		*res;
  int		j;

  if ((res = malloc((i - k + 1) * sizeof(char))) == NULL)
    return (NULL);
  j = 0;
  while (k < i)
    {
      res[j] = str[k];
      k++;
      j++;
    }
  res[j] = '\0';
  return (res);
}

static char	*strcpy_for_wdtb(char *str, int max, char *params, int k)
{
  int		i;
  char		*res;

  i = 0;
  while (str[i] && k < max)
    {
      if (is_in(str[i], params) != ERROR)
	k++;
      i++;
    }
  k = i;
  while (str[i] && is_in(str[i], params) == ERROR)
    i++;
  if ((res = get_res(k, i, str)) == NULL)
    return (NULL);
  return (res);
}

static int	word_count(char *str, char *params)
{
  int		i;
  int		nb;

  i = 0;
  nb = 1;
  while (str[i])
    {
      if (is_in(str[i], params) == 0
	  && is_in(str[i + 1], params) == ERROR)
	nb++;
      i++;
    }
  return (nb);
}

char	**my_str_to_wordtab(char *str, char *params)
{
  char	**res;
  int	nb;
  int	i;

  nb = word_count(str, params);
  if ((res = malloc((nb + 1) * sizeof(char *))) == NULL)
    return (NULL);
  i = 0;
  while (i < nb)
    {
      if ((res[i] = strcpy_for_wdtb(str, i, params, 0)) == NULL)
	return (NULL);
      i++;
    }
  res[i] = NULL;
  return (res);
}

/*
** get_next_line.c for minicut in /home/baron_l//local/rendu/projets/Colle/colle8
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Thu Jun 13 09:20:01 2013 louis-philippe baron
** Last update Thu Jun 13 12:11:44 2013 louis-philippe baron
*/

#include	"hget_next_line.h"

int		check_n(char *buffer)
{
  int		i;

  i = 0;
  while (buffer[i] && buffer[i] != '\n')
    i++;
  if (buffer[i])
    return (1);
  return (0);
}

char		*cpy_buffer(char *buffer, char *save, int rd)
{
  char		*str;
  int		i;
  int		k;

  i = 0;
  if (save)
    while (save[i])
      i++;
  if ((str = malloc((i + rd + 2) * sizeof(char))) == NULL)
    return (NULL);
  i = 0;
  k = 0;
  if (save)
    while (save[k])
      str[i++] = save[k++];
  k = 0;
  while (buffer[k])
    str[i++] = buffer[k++];
  str[i] = '\0';
  if (save)
    free(save);
  return (str);
}

char		*save_end(char *res, char *save)
{
  char		*str;
  int		k;
  int		i;

  i = 0;
  while (res[i])
    i++;
  i++;
  k = i;
  while (save[i])
    i++;
  if ((str = malloc((i - k + 2) * sizeof(char))) == NULL)
    return (NULL);
  i = 0;
  while (save[k])
    str[i++] = save[k++];
  str[i] = '\0';
  free(save);
  return (str);
}

char		*cpy_to_res(char *save)
{
  char		*res;
  int		i;

  i = 0;
  if (save[0] == '\0')
    return (NULL);
  while (save[i] != '\n' && save[i])
    i++;
  if ((res = malloc((i + 1) * sizeof(char))) == NULL)
    return (NULL);
  i = 0;
  while (save[i] != '\n' && save[i])
    {
      res[i] = save[i];
      i++;
    }
  res[i] = '\0';
  return (res);
}

char		*get_next_line(const int fd)
{
  char		*buffer;
  int		rd;
  char		*res;
  static char	*save = NULL;

  if ((buffer = malloc((READSIZE + 1) * sizeof(char))) == NULL
      || (rd = read(fd, buffer, READSIZE)) < 0)
    return (NULL);
  buffer[rd] = '\0';
  if ((save = cpy_buffer(buffer, save, rd)) == NULL)
    return (NULL);
  while (check_n(buffer) == 0 && (rd = read(fd, buffer, READSIZE)) != 0)
    if ((save = cpy_buffer(buffer, save, rd + 1)) == NULL)
      return (NULL);
  free(buffer);
  if ((res = cpy_to_res(save)) == NULL)
    {
      free(save);
      save = NULL;
      return (NULL);
    }
  if ((save = save_end(res, save)) == NULL)
    return (NULL);
  return (res);
}

/*
** basics.c for my_mixword in /home/baron_l//local/rendu/projets/Colle/colle3/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue May  7 09:11:10 2013 louis-philippe baron
** Last update Tue May  7 10:24:33 2013 louis-philippe baron
*/

#include	"hmix.h"

int		my_strcmp(char *s1, char *s2)
{
  int		i;

  i = 0;
  while (s1[i] && s2[i])
    {
      if (s1[i] != s2[i])
	return (ERROR);
      i++;
    }
  if (s2[i])
    return (ERROR);
  return (0);
}

/*
** my_open.c for my_mixword in /home/baron_l//local/rendu/projets/Colle/colle3/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue May  7 10:21:57 2013 louis-philippe baron
** Last update Tue May  7 12:24:14 2013 louis-philippe baron
*/

#include	"hmix.h"

int		my_open(char *str)
{
  int		fd;

  if ((fd = open(str, O_RDONLY)) == -1)
    {
      my_putstr("Cannot open file\n");
      return (ERROR);
    }
  return (fd);
}

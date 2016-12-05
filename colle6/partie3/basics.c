/*
** basics.c for text_count in /home/baron_l//local/rendu/projets/Colle/colle6
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue May 28 09:19:51 2013 louis-philippe baron
** Last update Tue May 28 10:42:42 2013 louis-philippe baron
*/

#include	<unistd.h>

void		my_putchar(char c)
{
  write(1, &c, 1);
}

int		my_putstr(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      my_putchar(str[i]);
      i++;
    }
  return (0);
}

int		my_putnbr(int nb)
{
  if (nb > 9)
    my_putnbr(nb / 10);
  my_putchar(nb % 10 + '0');
  return (0);
}

int		my_memset(int tab[])
{
  int		i;

  i = 0;
  while (i < 95)
    {
      tab[i] = 0;
      i++;
    }
  return (0);
}

int		my_strcmp(char *s1, char *s2)
{
  int		i;

  i = 0;
  while (s1[i] && s2[i])
    {
      if (s1[i] != s2[i])
	return (1);
      i++;
    }
  if (s1[i] || s2[i])
    return (1);
  return (0);
}

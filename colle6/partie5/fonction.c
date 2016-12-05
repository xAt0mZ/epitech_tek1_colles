/*
** fonction.c for fonction in /home/mantez_p//text_count/Partie_1
** 
** Made by paul mantez
** Login   <mantez_p@pc-mantez_p>
** 
** Started on  Tue May 28 09:11:02 2013 paul mantez
** Last update Tue May 28 09:53:14 2013 paul mantez
*/

void		my_putchar(char c)
{
  write(1, &c, 1);
}

void		my_putstr(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      my_putchar(str[i]);
      i++;
    }
}

int		my_strlen(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

int		my_getnbr(char *str)
{
  int		i;
  int		res;
  int		a;

  i = 0;
  res = 0;
  a = 1;
  if (str[i] == '-')
    {
      a = -1;
      i++;
    }
  while (str[i] != 0)
    {
      res = res * 10 + (str[i] - '0');
      i++;
    }
  return (res * a);
}

int		my_putnbr(int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb *= -1;
    }
  if (nb > 9)
    my_putnbr(nb / 10);
  my_putchar(nb % 10 + '0');
  return (0);
}

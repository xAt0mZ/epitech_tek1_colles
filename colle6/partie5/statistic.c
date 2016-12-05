/*
** statistic.c for statistic in /home/mantez_p//text_count/Partie_3
** 
** Made by paul mantez
** Login   <mantez_p@pc-mantez_p>
** 
** Started on  Tue May 28 10:09:50 2013 paul mantez
** Last update Tue May 28 12:36:21 2013 louis-philippe baron
*/

int		stat_it(int *tab, int nb_ocu, int scd_chaine, int r)
{
  int		b;

  if (r == 0)
    statistic(nb_ocu, scd_chaine);
  else
    {
      b = sort_number_statistic(tab, nb_ocu);
      if (b > 1)
	statistic(b, scd_chaine);
      else
	statistic(nb_ocu, scd_chaine);
    }
  return (0);
}

void		my_printg(int nb_ocu, int size)
{
  my_putstr("(");
  my_putnbr(nb_ocu);
  my_putstr(")(");
  my_putnbr(size);
  my_putstr("%)");
}

int		sort_number_statistic(int *tab, int nb_ocu)
{
  int		i;
  int		h;
  int		b;

  b = 0;
  i = 0;
  h = -1;
  while (i < 95)
    {
      if (tab[i] == nb_ocu)
	b++;
      i++;
    }
  return (b);
}

int		statistic(int nb_ocu, int size)
{
  int		res;

  res = nb_ocu * 100 / size;
  my_printg(nb_ocu, res);
}

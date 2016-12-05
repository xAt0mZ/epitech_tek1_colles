/*
** sort_number.c for sort_number in /home/mantez_p//text_count/Partie_3
** 
** Made by paul mantez
** Login   <mantez_p@pc-mantez_p>
** 
** Started on  Tue May 28 09:16:04 2013 paul mantez
** Last update Tue May 28 12:16:49 2013 paul mantez
*/

int		main(int ac, char **av)
{
  int		tab[95];
  int		i;

  i = 0;
  while (i < 95)
    {
      tab[i] = 0;
      i++;
    }
  tab[67] = 2;
  tab[68] = 2;
  tab[69] = 2;
  tab[70] = 2;
  tab[71] = 2;
  tab[72] = 2;
  tab[73] = 2;
  tab[74] = 2;
  stat_it(tab, 2, 10, 0);
}

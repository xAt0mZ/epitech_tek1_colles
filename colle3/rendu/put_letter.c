/*
** put_letter.c for put_letter in /home/mantez_p//mixword
** 
** Made by paul mantez
** Login   <mantez_p@pc-mantez_p>
** 
** Started on  Tue May  7 09:43:39 2013 paul mantez
** Last update Tue May  7 12:02:31 2013 louis-philippe baron
*/

#include	"hmix.h"

static char	random_letter(int seed)
{
  int		i;

  srand(time(NULL) * seed * seed + seed);
  i = rand();
  i = i % 26;
  i = i + 'a';
  return ((char)i);
}

int		put_letter(char **tab)
{
  int		i;
  int		j;

  i = 0;
  while (tab[i])
    {
      j = 0;
      while (tab[i][j])
	{
	  if (tab[i][j] == ' ')
	    tab[i][j] = random_letter(i * j);
	  j++;
	}
      i++;
    }
  return (0);
}

/*
** ia2.c for ia2 in /home/mantez_p//colle7
** 
** Made by paul mantez
** Login   <mantez_p@pc-mantez_p>
** 
** Started on  Tue Jun  4 11:03:14 2013 paul mantez
** Last update Tue Jun  4 12:55:51 2013 louis-philippe baron
*/

int		check_ial_ver(char **tab, char c, char v)
{
  int		count;
  int		i;
  int		j;

  count = 0;
  i = 0;
  j = 0;
  while (tab[i][j] == v && i < 3)
    {
      i++;
      count++;
    }
  if (count == 2 && tab[i][j] == ' ')
    {
      tab[i][j] = c;
      return (1);
    }
  return (0);
}

int		check_ial_hor(char **tab, char c, char v)
{
  int		count;
  int		i;
  int		j;

  count = 0;
  i = 0;
  j = 0;
  while (tab[i][j] == v && j < 3)
    {
      j++;
      count++;
    }
  if (count == 2 && tab[i][j] == ' ')
    {
      tab[i][j] = c;
      return (1);
    }
  return (0);
}

int		trapole(char **tab, char c)
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
	    {
	      tab[i][j] = c;
	      return (0);
	    }
	  j++;
	}
      i++;
    }
  return (0);
}

int		trap(char **tab, char c)
{
  int		i;
  int		j;

  i = 2;
  while (tab[i])
    {
      j = 0;
      while (tab[i][j])
	{
	  if (tab[i][j] == ' ')
	    {
	      tab[i][j] = c;
	      return (0);
	    }
	  j++;
	}
      i++;
    }
  trapole(tab, c);
  return (0);
}

int		complete(char **tab, char c)
{
  int		i;
  int		j;

  i = 1;
  while (tab[i])
    {
      j = 1;
      while (tab[i][j])
	{
	  if (tab[i][j] == ' ')
	    {
	      tab[i][j] = c;
	      return (0);
	    }
	  j++;
	}
      i++;
    }
  trap(tab, c);
  return (0);
}

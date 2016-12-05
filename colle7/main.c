/*
** main.c for morpion in /home/baron_l//local/rendu/projets/Colle/colle7
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Jun  4 09:07:49 2013 louis-philippe baron
** Last update Tue Jun  4 13:16:39 2013 louis-philippe baron
*/

#include	<unistd.h>
#include	<stdlib.h>
#include	"hmorpion.h"

static char	**fill_tab()
{
  int		i;
  int		j;
  char		**res;

  if ((res = malloc(4 * sizeof(char *))) == NULL)
    return (NULL);
  j = 0;
  while (j < 3)
    {
      i = 0;
      if ((res[j] = malloc(4 * sizeof(char))) == NULL)
	return (NULL);
      while (i < 3)
	{
	  res[j][i] = ' ';
	  i++;
	}
      res[j][i] = '\0';
      j++;
    }
  res[j] = NULL;
  return (res);
}

static int	get_coord(char *buffer, char **tab)
{
  int		rd;

  rd = read(0, buffer, 4);
  if (rd == -1 || rd == 0)
    {
      my_putstr("Read failed\n");
      return (2);
    }
  while ((rd = check_buffer(buffer, rd, tab)) == 1)
    {
      rd = read(0, buffer, 4);
      if (rd == -1 || rd == 0)
	{
	  my_putstr("Read failed\n");
	  return (2);
	}
    }
  if (rd == 2)
    {
      my_putstr("Read failed\n");
      return (2);
    }
  return (0);
}

static int	morpion_2(char **tab, int starter)
{
  int		ret;
  char		buffer[5];

  buffer[4] = '\0';
  if (starter == 0)
    bot_play(tab, starter);
  if (is_a_win(tab) == 0)
    return (BOT);
  ret = ERROR;
  while (ret == ERROR)
    ret = get_coord(buffer, tab);
  if (ret == 2)
    return (ERROR);
  return (play(buffer, tab, starter));
}

static int	morpion(int ac, char **av)
{
  char		**tab;
  int		starter;
  int		ret;

  if (check_option(ac, av) == ERROR)
    return (ERROR);
  if ((tab = fill_tab()) == NULL)
    {
      my_putstr("Problem in memory allocation\n");
      return (ERROR);
    }
  starter = define_starter(tab);
  ret = 0;
  while (ret == 0 && is_tab_full(tab, &ret))
    {
      ret = morpion_2(tab, starter);
      if (ret == ERROR)
	return (ERROR);
    }
  put_victory(ret, (ac == 1 ? "Player" : av[2]), tab);
  free_tab(tab);
  return (0);
}

int		main(int ac, char **av)
{
  char		buffer[2];
  int		replay;

  replay = 0;
  if (ac == 1 || ac == 3)
    {
      while (replay == 0)
	{
	  if (morpion(ac, av) == ERROR)
	    return (ERROR);
	  if (read(0, buffer, 2) == -1)
	    {
	      my_putstr("Read failed\n");
	      return (ERROR);
	    }
	}
      if (buffer[0] != 'n' && buffer[1] != '\n')
	replay = 1;
    }
  else
    my_putstr("Usage : ./my_morpion [--name PLAYER_NAME]\n");
  return (0);
}

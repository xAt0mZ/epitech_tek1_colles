/*
** main.c for my_mixword in /home/baron_l//local/rendu/projets/Colle/colle3/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue May  7 09:07:19 2013 louis-philippe baron
** Last update Tue May  7 12:27:11 2013 louis-philippe baron
*/

#include	"hmix.h"

static int	define_size(int ac, char **av)
{
  int		size;

  if (ac == 3)
    size = DEFAULT_SIZE;
  else
    size = my_getnbr(av[4]);
  if (size <= 0)
    {
      my_putstr("Invalid size entered\n");
      return (ERROR);
    }
  return (size);
}

static int	mix2(char **file, char **grid, int size)
{
  fill_grid(file, grid, size);
  put_letter(grid);
  my_putstr("----------\nGrid generated\n----------\n");
  show_tab(grid);
  free_tab(file);
  if (loop(grid) == ERROR)
    {
      free_tab(grid);
      return (ERROR);
    }
  free_tab(grid);
  return (0);
}

static int	mix(int ac, char **av)
{
  char		**file;
  char		**grid;
  int		size;
  int		fd;

  if (check_params(ac, av) == ERROR)
    return (ERROR);
  if ((size = define_size(ac, av)) == ERROR)
    return (ERROR);
  if ((fd = my_open(av[2])) == ERROR)
    return (ERROR);
  if ((file = get_file(fd)) == NULL || (grid = create_grid(size)) == NULL)
    {
      my_putstr("Problem in memory allocation during file parsing\n");
      return (ERROR);
    }
  if (check_file(file) == ERROR)
    {
      free_both(file, grid);
      return (ERROR);
    }
  if (mix2(file, grid, size) == ERROR)
    return (ERROR);
  return (0);
}

int		main(int ac, char **av)
{
  if (ac == 3 || ac == 5)
    {
      if (mix(ac, av) == ERROR)
	return (ERROR);
    }
  else
    my_putstr("Usage : ./my_mixword -f FILE [-s SIZE]\n");
  return (0);
}

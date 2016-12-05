/*
** check_option.c for morpion in /home/baron_l//local/rendu/projets/Colle/colle7
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Jun  4 09:40:55 2013 louis-philippe baron
** Last update Tue Jun  4 10:24:10 2013 louis-philippe baron
*/

#include	"hmorpion.h"

int			check_option(int ac, char **av)
{
  if (ac == 1)
    return (0);
  if (my_strcmp(av[1], "--name") == ERROR || av[2][0] == '\0')
    {
      my_putstr("Please enter valid arguments as :\n");
      my_putstr("./my_morpion [--name PLAYER_NAME]\n");
      return (1);
    }
  return (0);
}

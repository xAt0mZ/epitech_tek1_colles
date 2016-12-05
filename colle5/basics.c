/*
** basics.c for mastermind in /home/baron_l//local/rendu/projets/Colle/colle5
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue May 21 09:40:59 2013 louis-philippe baron
** Last update Tue May 21 10:04:01 2013 louis-philippe baron
*/

#include	"hmastermind.h"

int		my_put_error()
{
  my_putstr("Usage : ./my_mastermind -c [CODE] ");
  my_putstr("-p [PIONS] -t [TENTATIVES] -s[SLOTS]\n");
  return (0);
}

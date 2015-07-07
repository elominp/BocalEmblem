/*
** my_round.c for mysh in /home/pirou_g/minishell2/src
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Feb  1 08:32:51 2015 Guillaume Pirou
** Last update Fri May 15 21:02:49 2015 guigui
*/

#include "my.h"

long	my_round(double in)
{
  int	i;

  i = in;
  if ((in - in) < 0.5)
    return (i);
  return (i + 1);
}

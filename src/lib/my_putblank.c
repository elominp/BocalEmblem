/*
** my_putblank.c for mysh in /home/pirou_g/minishell2/src
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Feb  1 08:30:52 2015 Guillaume Pirou
** Last update Fri May 15 21:01:12 2015 guigui
*/

#include "my.h"

void	my_putblank(int nb)
{
  int	i;

  i = -1;
  if (nb < 0)
    return;
  while (++i < nb)
    my_putchar(' ');
}

void	my_putzero(int nb)
{
  int	i;

  i = -1;
  if (nb < 0)
    return;
  while (++i < nb)
    my_putchar('0');
}

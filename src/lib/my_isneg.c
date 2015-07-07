/*
** my_isneg.c for mysh in /home/pirou_g/minishell2/src
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Feb  1 08:29:27 2015 Guillaume Pirou
** Last update Fri May 15 21:00:25 2015 guigui
*/

#include "my.h"

int my_isneg(int n)
{
  if (n < 0)
    my_putchar('N');
  else
    my_putchar('P');
  my_putchar('\n');
  return (0);
}

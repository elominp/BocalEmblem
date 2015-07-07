/*
** my_find_prime_sup.c for mysh in /home/pirou_g/minishell2/src
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Feb  1 08:28:32 2015 Guillaume Pirou
** Last update Fri May 15 21:00:10 2015 guigui
*/

#include "my.h"

int my_find_prime_sup(int nb)
{
  if (nb < 2)
    nb = 2;
  while (!my_is_prime(nb))
    ++nb;
  return (nb);
}

/*
** my_swap.c for mysh in /home/pirou_g/minishell2/src
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Feb  1 08:37:57 2015 Guillaume Pirou
** Last update Sat Feb  7 10:16:07 2015 guigui
*/

#include <stdlib.h>

void	my_swap(void *a, void *b)
{
  void	*c;

  if (a == NULL || b == NULL)
    return;
  c = *(void **)a;
  *(void **)a = *(void **)b;
  *(void **)b = c;
}

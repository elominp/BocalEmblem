/*
** my_sort_int_tab.c for mysh in /home/pirou_g/minishell2/src
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Feb  1 08:33:21 2015 Guillaume Pirou
** Last update Fri May 15 21:03:04 2015 guigui
*/

#include "my.h"

int	*the_litlest(int *tab, int size, int pos)
{
  int	loop;
  int	*var;
  int	var2;

  loop = 0 + pos;
  var2 = 2147483647;
  var = &var2;
  while (loop < size)
    {
      if (tab[loop] < *var)
	var = &tab[loop];
      ++loop;
    }
  return (var);
}

void	my_sort_int_tab(int *tab, int size)
{
  int	loop;
  int	*v2;

  loop = 0;
  while (loop < size)
    {
      v2 = the_litlest(tab, size, loop);
      my_swap(&tab[loop], v2);
      ++loop;
    }
}

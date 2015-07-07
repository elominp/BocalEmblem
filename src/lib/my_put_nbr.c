/*
** my_put_nbr.c for mysh in /home/pirou_g/minishell2/src
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Feb  1 08:32:02 2015 Guillaume Pirou
** Last update Fri May 15 21:01:07 2015 guigui
*/

#include "my.h"

int	my_pow(int nb, int pw)
{
  int	loop;
  int	cp_nb;

  loop = 1;
  cp_nb = nb;
  while (loop < pw)
    {
      nb *= cp_nb;
      ++loop;
    }
  return (nb);
}

int	my_count_nb(int nb)
{
  int	loop;
  int	count;

  loop = 0;
  count = 0;
  while (!loop)
    {
      if (nb == 0 || nb == -1)
	++loop;
      else
	{
	  nb /= 10;
	  ++count;
	}
    }
  return (count);
}

int	my_put_nbr(int nb)
{
  my_putnbr_base(nb, "0123456789");
  my_putchar('\n');
  return (0);
}

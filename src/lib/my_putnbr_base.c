/*
** my_putnbr_base.c for mysh in /home/pirou_g/minishell2/src
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Feb  1 08:31:51 2015 Guillaume Pirou
** Last update Fri May 15 21:01:27 2015 guigui
*/

#include "my.h"

int	my_printnbr(long nb, char *base, int bs)
{
  if (nb > -bs && nb < bs)
    {
      (nb < 0) ? my_putchar(base[-1 * nb]) : my_putchar(base[nb]);
      return (0);
    }
  my_printnbr(nb / bs, base, bs);
  (nb < 0) ? my_putchar(base[-(nb % bs)]) : my_putchar(base[nb % bs]);
  return (0);
}

int	my_putnbr_base(long nbr, char *base)
{
  if (nbr == 0)
    {
      my_putchar('0');
      return (0);
    }
  else if (nbr < 0)
      my_putchar('-');
  my_printnbr(nbr, base, my_strlen(base));
  return (0);
}

int	my_printunbr(unsigned long nb, char *base, unsigned int bs)
{
  if (nb < bs)
    {
      my_putchar(base[nb]);
      return (0);
    }
  my_printnbr(nb / bs, base, bs);
  my_putchar(base[nb % bs]);
  return (0);
}

int	my_putunbr_base(unsigned long nbr, char *base)
{
  if (nbr == 0)
    {
      my_putchar('0');
      return (0);
    }
  my_printnbr(nbr, base, my_strlen(base));
  return (0);
}

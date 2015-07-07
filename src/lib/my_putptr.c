/*
** my_putptr.c for mysh in /home/pirou_g/minishell2/src
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Feb  1 08:32:12 2015 Guillaume Pirou
** Last update Fri May 15 21:01:34 2015 guigui
*/

#include <stdlib.h>
#include <stdarg.h>
#include "my_printf.h"
#include "my.h"

int	my_ptrprintnbr(unsigned long nb, char *base, unsigned int bs)
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

int	my_putptr(unsigned long nbr)
{
  if (nbr == 0)
    {
      my_putchar('0');
      return (0);
    }
  my_putstr("0x");
  my_printnbr(nbr, "0123456789abcdef", 16);
  return (0);
}

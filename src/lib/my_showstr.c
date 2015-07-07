/*
** my_showstr.c for mysh in /home/pirou_g/minishell2/src
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Feb  1 08:33:11 2015 Guillaume Pirou
** Last update Fri May 15 21:02:59 2015 guigui
*/

#include "my.h"

void	my_printb16(char c)
{
  if (c > 15)
    my_printb16(c / 16);
  if (c % 16 > 9)
    my_putchar(((c % 16) - 10) + 97);
  else
    my_putchar((c % 16) + 48);
}

int	my_showstr(char *str)
{
  int	lp;

  lp = 0;
  while (str[lp] != '\0')
    {
      if (str[lp] < 32)
	{
	  my_putchar('\\');
	  if (str[lp] < 16)
	    my_putchar('0');
	  if (str[lp] % 16 > 9)
	    my_printb16(str[lp]);
	  else
	    my_putchar((str[lp] % 16) + 48);
	}
      else
	my_putchar(str[lp]);
      ++lp;
    }
  my_putchar('\n');
  return (0);
}

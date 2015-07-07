/*
** my_strcapitalize.c for mysh in /home/pirou_g/minishell2/src
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Feb  1 08:33:43 2015 Guillaume Pirou
** Last update Fri May 15 21:03:22 2015 guigui
*/

#include "my.h"

int	my_capitalize(char *str, int index)
{
  if (str[index] >= 97 && str[index] <= 122)
    {
      str[index] -= 32;
      return (0);
    }
  else
    return (my_verifc(str, ++index));
}

int	my_verifc(char *str, int index)
{
  if ((str[index] >= 48 && str[index] <= 57) ||
      (str[index] >= 65 && str[index] <= 90) ||
      (str[index] >= 97 && str[index] <= 122))
    return (0);
  else
    return (1);
}

char	*my_strcapitalize(char *str)
{
  int	cdt;
  int	lp;

  lp = 0;
  cdt = 0;
  while (str[lp] != '\0')
    {
      if (str[lp] >= 97 && str[lp] <= 122)
	{
	  if (lp == 0 || cdt)
	    cdt = my_capitalize(str, lp);
	}
      else
	cdt = my_verifc(str, lp);
      ++lp;
    }
  return (str);
}

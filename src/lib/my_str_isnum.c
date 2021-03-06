/*
** my_str_isnum.c for mysh in /home/pirou_g/minishell2/src
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Feb  1 08:35:22 2015 Guillaume Pirou
** Last update Sun Feb  1 08:35:22 2015 Guillaume Pirou
*/

#include <stdlib.h>

int	my_isnum(char c)
{
  if (c == '-' || c == '+' || (c >= '0' && c <= '9'))
    return (1);
  return (0);
}

int	my_str_isnum(char *str)
{
  int	lp;

  if (str == NULL)
    return (1);
  lp = 0;
  while (str[lp] != '\0')
    {
      if (str[lp] < 48 || str[lp] > 57)
	return (0);
      ++lp;
    }
  return (1);
}

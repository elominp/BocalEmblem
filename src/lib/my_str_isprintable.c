/*
** my_str_isprintable.c for mysh in /home/pirou_g/minishell2/src
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Feb  1 08:35:32 2015 Guillaume Pirou
** Last update Sun Feb  1 08:35:33 2015 Guillaume Pirou
*/

#include <stdlib.h>

int	my_str_isprintable(char *str)
{
  int	lp;

  if (str == NULL)
    return (1);
  lp = 0;
  while (str[lp] != '\0')
    {
      if (str[lp] < 32 || str[lp] > 126)
	return (0);
      ++lp;
    }
  return (1);
}

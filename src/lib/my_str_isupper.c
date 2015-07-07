/*
** my_str_isupper.c for mysh in /home/pirou_g/minishell2/src
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Feb  1 08:35:40 2015 Guillaume Pirou
** Last update Sun Feb  1 08:35:41 2015 Guillaume Pirou
*/

#include <stdlib.h>

int	my_str_isupper(char *str)
{
  int	lp;

  if (str == NULL)
    return (1);
  lp = 0;
  while (str[lp] != '\0')
    {
      if (str[lp] < 65 || str[lp] > 90)
	return (0);
      ++lp;
    }
  return (1);
}

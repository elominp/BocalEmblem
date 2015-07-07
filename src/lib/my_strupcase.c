/*
** my_strupcase.c for mysh in /home/pirou_g/minishell2/src
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Feb  1 08:37:49 2015 Guillaume Pirou
** Last update Sat Feb  7 10:33:37 2015 guigui
*/

#include <stdlib.h>

char	*my_strupcase(char *str)
{
  int	lp;

  if (str == NULL)
    return (NULL);
  lp = 0;
  while (str[lp] != '\0')
    {
      if (str[lp] >= 97 && str[lp] <= 122)
	str[lp] -= 32;
      ++lp;
    }
  return (str);
}

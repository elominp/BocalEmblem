/*
** my_revstr.c for mysh in /home/pirou_g/minishell2/src
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Feb  1 08:32:43 2015 Guillaume Pirou
** Last update Fri May 15 21:02:28 2015 guigui
*/

#include <stdlib.h>
#include "my.h"

char	*my_revstr(char *str)
{
  int	len;
  int	lp;
  char	cp;

  if (str == NULL)
    return (NULL);
  len = my_strlen(str);
  my_put_nbr(len);
  lp = 0;
  while (lp < (len / 2))
    {
      cp = str[lp];
      str[lp] = str[len - lp - 1];
      str[len - lp - 1] = cp;
      ++lp;
    }
  return (str);
}

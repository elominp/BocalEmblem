/*
** my_strstr.c for mysh in /home/pirou_g/minishell2/src
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Feb  1 08:37:00 2015 Guillaume Pirou
** Last update Fri May 15 21:04:17 2015 guigui
*/

#include <stdlib.h>
#include "my.h"

char	*my_strstr(char *str, char *to_find)
{
  int	lens[2];
  int	lp;
  int	lp2;

  lens[0] = my_strlen(str);
  lens[1] = my_strlen(to_find);
  lp = -1;
  if (to_find == NULL)
    return (str);
  while (++lp < (lens[0] - lens[1]) + 1)
    {
      lp2 = 0;
      while (lp2 < lens[1])
	{
	  if (str[lp + lp2] == to_find[lp2])
	    {
	      ++lp2;
	      if (lp2 == lens[1])
		return (str + lp);
	    }
	  else
	    lp2 = 2147483647;
	}
    }
  return ((void*)0);
}

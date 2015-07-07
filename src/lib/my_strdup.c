/*
** my_strdup.c for mysh in /home/pirou_g/minishell2/src
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Feb  1 08:34:30 2015 Guillaume Pirou
** Last update Fri May 15 21:03:55 2015 guigui
*/

#include <stdlib.h>
#include "my.h"
#include "my_mem.h"

char	*my_strdup(char *src)
{
  int	len;
  int	lp;
  char	*dest;

  len = my_strlen(src);
  lp = 0;
  if ((dest = gbgc_malloc(NULL, len + 1)) == NULL)
      return (NULL);
  while (lp < len)
    {
      dest[lp] = src[lp];
      ++lp;
    }
  dest[lp] = '\0';
  return (dest);
}

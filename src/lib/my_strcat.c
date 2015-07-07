/*
** my_strcat.c for mysh in /home/pirou_g/minishell2/src
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Feb  1 08:33:55 2015 Guillaume Pirou
** Last update Fri May 15 21:03:30 2015 guigui
*/

#include <stdlib.h>
#include <unistd.h>
#include "my.h"
#include "my_mem.h"

char	*my_strstick(char *st1, char *st2)
{
  int	len;
  char	*dest;
  int	i;
  int	j;

  if (st1 == NULL || st2 == NULL)
    return (NULL);
  len = my_strlen(st1) + my_strlen(st2) + 1;
  if ((dest = gbgc_malloc(NULL, len)) == NULL)
    return (NULL);
  i = -1;
  j = -1;
  while (st1[++i] != '\0')
    dest[++j] = st1[i];
  i = -1;
  while (st2[++i] != '\0')
    dest[++j] = st2[i];
  dest[++j] = '\0';
  return (dest);
}

char	*my_strcat(char *dest, char *src)
{
  int	lp;
  int	cnt;

  cnt = -1;
  while (dest[++cnt] != '\0');
  lp = 0;
  while (src[lp] != '\0')
    {
      dest[cnt + lp] = src[lp];
      ++lp;
    }
  dest[cnt + lp] = '\0';
  return (dest);
}

/*
** count_els.c for BocalEmblem in /home/guigui/BocalEmblem/src/lib
** 
** Made by guigui
** Login   <guigui@epitech.net>
** 
** Started on  Sat May 16 17:33:17 2015 guigui
** Last update Sat May 16 17:34:45 2015 guigui
*/

#include <stdlib.h>

int	count_els(void **tab)
{
  char	**tmp;
  int	i;

  i = -1;
  if ((tmp = (char **)tab) != NULL)
    while (tmp[++i] != NULL);
  return (i);
}

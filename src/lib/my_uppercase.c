/*
** my_uppercase.c for mysh in /home/pirou_g/minishell2/src
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Feb  1 08:38:04 2015 Guillaume Pirou
** Last update Fri May 15 21:04:46 2015 guigui
*/

#include <stdlib.h>
#include "my.h"

char	*my_uppercase(char *temp)
{
  int	i;
  char	*buff;

  if (temp == NULL)
    return (NULL);
  if ((buff = my_strdup(temp)) == NULL)
    return (NULL);
  i = -1;
  while (buff[++i] != '\0')
    {
      if (buff[i] >= 'a' && buff[i] <= 'z')
	buff[i] -= 32;
    }
  buff[i] = '\0';
  return (buff);
}

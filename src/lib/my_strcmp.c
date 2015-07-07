/*
** my_strcmp.c for mysh in /home/pirou_g/minishell2/src
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Feb  1 08:34:05 2015 Guillaume Pirou
** Last update Fri May 15 21:03:38 2015 guigui
*/

#include "my.h"

int	my_strcmp(char *s1, char *s2)
{
  while (*s1 != '\0' && *s2 != '\0' && (*s1++ == *s2++));
  s1--;
  s2--;
  if (*s1 < *s2)
    return (-1);
  else if (*s1 == *s2)
    {
      if (my_strlen(s1) < my_strlen(s2))
	return (-1);
      else if (my_strlen(s1) > my_strlen(s2))
	return (1);
      else
	return (0);
    }
  else
    return (1);
}

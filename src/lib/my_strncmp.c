/*
** my_strncmp.c for my_strncmp in /home/pirou_g/Piscine/Piscine_C_J06
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Mon Oct  6 11:16:03 2014 Guillaume Pirou
** Last update Fri May 15 21:04:11 2015 guigui
*/

#include "my.h"

int	my_strncmp(char *s1, char *s2, int n)
{
  int   lp;

  lp = 0;
  while (*s1 != '\0' && *s2 != '\0' && (*s1++ == *s2++) && lp < n)
    ++lp;
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

/*
** my_show_wordtab.c for my_show_wordtab in /home/pirou_g/Piscine/Piscine_C_J08
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Thu Oct  9 18:48:57 2014 Guillaume Pirou
** Last update Fri May 15 21:02:55 2015 guigui
*/

#include <stdlib.h>
#include "my.h"

int	my_show_wordtab(char **tab)
{
  int	lp;

  if (tab == NULL)
    return (0);
  lp = -1;
  while (tab[++lp] != 0)
    {
      my_putstr(tab[lp]);
      my_putchar('\n');
    }
  return (0);
}

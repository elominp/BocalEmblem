/*
** convert_base.c for mysh in /home/pirou_g/minishell2/src
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Feb  1 08:26:54 2015 Guillaume Pirou
** Last update Fri May 15 20:59:18 2015 guigui
*/

#include "my.h"

char	*convert_base(char *nbr, char *base_from, char *base_to)
{
  int	nb;
  char	*tab;

  nb = my_getnbr_base(nbr, base_from);
  tab = (char *)my_strnbr(nb, base_to);
  return (tab);
}

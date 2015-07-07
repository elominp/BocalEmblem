/*
** my_putstr.c for mysh in /home/pirou_g/minishell2/src
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Feb  1 08:32:33 2015 Guillaume Pirou
** Last update Fri May 15 21:01:38 2015 guigui
*/

#include <unistd.h>
#include <stdlib.h>
#include "my.h"

int	my_putstr(char *str)
{
  if (str != NULL)
    write(1, str, my_strlen(str));
  return (0);
}

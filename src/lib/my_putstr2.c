/*
** my_putstr2.c for mysh in /home/pirou_g/minishell2/src
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Feb  1 08:32:24 2015 Guillaume Pirou
** Last update Fri May 15 21:04:54 2015 guigui
*/

#include <unistd.h>
#include <stdlib.h>
#include "my.h"

void	my_putstr2(char *str)
{
  if (str != NULL)
    write(2, str, my_strlen(str));
}

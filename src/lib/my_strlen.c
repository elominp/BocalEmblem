/*
** my_strlen.c for mysh in /home/pirou_g/minishell2/src
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Feb  1 08:36:05 2015 Guillaume Pirou
** Last update Sat Feb  7 10:30:49 2015 guigui
*/

#include <stdlib.h>

int	my_strlen(char *str)
{
  int	loop;

  loop = 0;
  if (str == NULL)
    return (-1);
  while (str[loop] != '\0')
    ++loop;
  return (loop);
}

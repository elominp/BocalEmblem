/*
** my_putchar.c for mysh in /home/pirou_g/minishell2/src
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Feb  1 08:31:27 2015 Guillaume Pirou
** Last update Sat Feb  7 10:25:35 2015 guigui
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}

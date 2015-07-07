/*
** my_putchar2.c for mysh in /home/pirou_g/minishell2/src
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Feb  1 08:31:16 2015 Guillaume Pirou
** Last update Sun Feb  1 08:31:17 2015 Guillaume Pirou
*/

#include <unistd.h>

void	my_putchar2(char c)
{
  write(2, &c, 1);
}

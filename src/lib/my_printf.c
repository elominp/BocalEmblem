/*
** my_printf.c for mysh in /home/pirou_g/minishell2/src
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Feb  1 08:30:40 2015 Guillaume Pirou
** Last update Fri May 15 21:00:55 2015 guigui
*/

#include <stdlib.h>
#include <stdarg.h>
#include "my_printf.h"
#include "my.h"

int		my_printf(const char *format, ...)
{
  int		i;
  va_list	list;
  int		cp;

  if (format == NULL)
    return (-1);
  i = -1;
  va_start(list, format);
  while (format[++i] != '\0')
    {
      if (format[i] != '%')
	my_putchar(format[i]);
      else
	{
	  cp = i;
	  i += my_parse_format(format + i, &list);
	  if (i < cp)
	    return (-1);
	}
    }
  va_end(list);
  return (0);
}

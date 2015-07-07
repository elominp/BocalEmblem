/*
** my_puterr.c for BocalEmblem in /home/guigui/BocalEmblem/src/playRadiance
** 
** Made by guigui
** Login   <guigui@epitech.net>
** 
** Started on  Sat May 16 09:50:14 2015 guigui
** Last update Sat May 16 10:17:28 2015 guigui
*/

#include <stdlib.h>
#include <unistd.h>
#include "my.h"
#include "playradiance.h"

long	my_puterr(char *msg)
{
  if (msg != NULL)
    write(2, msg, my_strlen(msg));
  return (0);
}

int		set_crtreturn(int *ptr, int newvalue)
{
  static int	*value;

  value = (ptr != NULL) ? ptr : value;
  if (value != NULL)
    *value = newvalue;
  return ((value != NULL) ? 1 : 0);
}

int		get_crtreturn(int *ptr)
{
  static int	*value;

  value = (ptr != NULL) ? ptr : value;
  return ((value != NULL) ? *value : 1);
}

int		init_checkerrorreturn()
{
  static int	value;

  value = 0;
  if (!set_crtreturn(&value, 0) || get_crtreturn(&value))
    return (0);
  return (1);
}

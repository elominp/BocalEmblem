/*
** get_unitbyid.c for BocalEmblem in /home/guigui/BocalEmblem/src/playRadiance
** 
** Made by guigui
** Login   <guigui@epitech.net>
** 
** Started on  Sat May 16 17:21:59 2015 guigui
** Last update Sun May 17 15:45:51 2015 guigui
*/

#include <stdlib.h>
#include "strategic.h"
#include "listes.h"
#include "my.h"

t_uni	*get_unitbyid(t_dtf *map, int id)
{
  t_mls	*cpy;
  t_uni	*tmp;

  if (get_crtreturn(NULL))
    return (0);
  if (map == NULL || ISERRV(id) || (cpy = map->units) == NULL)
    {
      my_putstr(DEFERR);
      return ((t_uni *)dbgerr("Error: get_unitbyid: Invalid / NULL parameter"));
    }
  while ((cpy = cpy->next) != NULL && (tmp = cpy->item) != NULL)
    {
      if (tmp->id == id)
	return (tmp);
    }
  my_putstr(DEFERR);
  return ((t_uni *)dbgerr("Error: get_unitbyid: Impossible to found the unit"));
}

int     calc_dist(int ax, int bx, int ay, int by)
{
  return (MABS(my_square_root(my_power_it(bx - ax, 2) +
                              my_power_it(by - ay, 2))));
}

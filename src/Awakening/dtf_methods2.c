/*
** dtf_methods2.c for BocalEmblem in /home/guigui/BocalEmblem/src/Radiant
** 
** Made by guigui
** Login   <guigui@epitech.net>
** 
** Started on  Sat May 16 21:54:44 2015 guigui
** Last update Sun May 17 09:06:25 2015 guigui
*/

#include <stdlib.h>
#include "strategic.h"
#include "listes.h"
#include "my_printf.h"
#include "my.h"

int	dtf_attack(t_dtf *map, int ida, int idb)
{
  t_uni	*unita;
  t_uni	*unitb;

  if (get_crtreturn(NULL))
    return (0);
  if (map == NULL || ISERRV(ida) || ISERRV(idb) ||
      (unita = get_unitbyid(map, ida)) == NULL ||
      (unitb = get_unitbyid(map, idb)) == NULL)
    return (dbgerr("Error: dtf_attack: NULL or invalid parameter"));
  if (unita->life <= 0 || unitb->life <= 0)
    {
      my_putstr(ERRCMD);
      return (dbgerr("Error: dtf_attack: fight between one or 2 deads units"));
    }
  return (unita->attack(unita, unitb, map));
}

int	dtf_showmap(t_dtf *map)
{
  int	i;
  int	j;

  i = -1;
  if (get_crtreturn(NULL))
    return (0);
  if (map == NULL || map->map == NULL)
    return (dbgerr("Error: dtf_showmap: NULL parameter"));
  while (++i < map->height && map->map[i] != NULL)
    {
      j = -1;
      while (++j < map->width)
	{
	  my_printf("%d%s",
		    map->map[i][j],
		    (((j + 1) == map->width) ? "\n" : " "));
	}
    }
  return (1);
}

int	dtf_isunitused(t_dtf *map, int id)
{
  t_uni	*unit;

  if (get_crtreturn(NULL))
    return (0);
  if (map == NULL || ISERRV(id) || (unit = get_unitbyid(map, id)) == NULL)
    return (dbgerr("Error: dtf_isunitused: NULL or invalid parameter"));
  my_printf("%s\n", ((unit->used) ? "yes" : "no"));
  return (1);
}

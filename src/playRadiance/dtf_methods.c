/*
** dtf_methods.c for BocalEmblem in /home/guigui/BocalEmblem/src/playRadiance
** 
** Made by guigui
** Login   <guigui@epitech.net>
** 
** Started on  Sat May 16 10:07:45 2015 guigui
** Last update Sat May 16 18:50:38 2015 guigui
*/

#include <stdlib.h>
#include "strategic.h"
#include "my.h"
#include "my_printf.h"

int	dtf_move(t_dtf *map, int id, char *position)
{
  t_uni	*tmp;

  if (get_crtreturn(NULL))
    return (0);
  if (map == NULL || position == NULL || ISERRV(id) ||
      (tmp = get_unitbyid(map, id)) == NULL)
    {
      my_putstr(DEFERR);
      return (dbgerr("Error: dtf_move: 1 or more invalid parameter"));
    }
  if (!my_strcmp(position, PUPCMD))
    return (tmp->move(tmp, map, tmp->px, tmp->py - 1));
  else if (!my_strcmp(position, DOWNCD))
    return (tmp->move(tmp, map, tmp->px, tmp->py + 1));
  else if (!my_strcmp(position, PRIGHT))
    return (tmp->move(tmp, map, tmp->px + 1, tmp->py));
  else if (!my_strcmp(position, LEFTCD))
    return (tmp->move(tmp, map, tmp->px - 1, tmp->py));
  my_putstr(DEFERR);
  return (dbgerr("Error: dtf_move: Unknown position"));
}

int	dtf_strategic(t_dtf *map)
{
  if (get_crtreturn(NULL))
    return (0);
  if (map == NULL)
    return (dbgerr("Error: dtf_strategic: NULL parameter"));
  my_printf("The %s is %d on %d.\n", map->name, (map->width - 1),
	    (map->height - 1));
  dtf_describeunits(map);
  return (1);
}

int	dtf_pass(t_dtf *map)
{
  t_mls	*cpy;
  t_uni	*tmp;

  if (get_crtreturn(NULL))
    return (0);
  if (map == NULL || (cpy = map->units) == NULL)
    return (dbgerr("Error: dtf_pass: NULL parameter"));
  map->actplayer = (map->actplayer == BLUEPL) ? REDPLY : BLUEPL;
  while ((cpy = cpy->next) != NULL && (tmp = cpy->item) != NULL)
    tmp->used = 0;
  dbgdok("Changed actual player");
  return (1);
}

int	dtf_createmap(t_dtf *map, char ***raw)
{
  if (get_crtreturn(NULL))
    return (0);
  if (map == NULL || raw == NULL)
    return (dbgerr("Error: dtf_createmap: NULL parameter"));
  if ((map->width = get_mapwidth(raw[0])) <= 0 ||
      (map->height = get_mapheight(raw)) <= 0 || !check_maprect(map, raw) ||
      !convert_rawtomap(map, raw) || !check_borders(map))
    return (dbgerr("Error: dtf_createmap: invalid parameters"));
  return (1);
}

int	dtf_createunits(t_dtf *map)
{
  if (get_crtreturn(NULL))
    return (0);
  if (map == NULL)
    return (dbgerr("Error: dtf_createunits: NULL parameter"));
  if (!dtf_setunits(map))
    return (dbgerr("Error: dtf_createunits: Can't create the units list"));
  return (1);
}

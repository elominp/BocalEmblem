/*
** dtf_setunits.c for BocalEmblem in /home/guigui/BocalEmblem/src/playRadiance
** 
** Made by guigui
** Login   <guigui@epitech.net>
** 
** Started on  Sat May 16 14:02:22 2015 guigui
** Last update Sun May 17 18:45:59 2015 guigui
*/

#include <stdlib.h>
#include "playradiance.h"
#include "my.h"
#include "listes.h"
#include "my_printf.h"

int	dtf_descunit(t_uni *unit)
{
  if (get_crtreturn(NULL))
    return (0);
  if (unit == NULL)
    return (dbgerr("Error: dtf_descunit: NULL or invalid parameter"));
  if (unit->color == DEADTP)
    return (0);
  my_printf("The %s unit %d is in %d/%d.\n",
	 ((unit->color == BLUEPL) ? BLUEUN : REDUNI),
	 unit->id,
	 unit->px,
	 unit->py);
  return (1);
}

int	dtf_describeunits(t_dtf *map)
{
  t_mls	*cpy;

  if (get_crtreturn(NULL))
    return (0);
  if (map == NULL || (cpy = map->units) == NULL)
    return (dbgerr("Error: dtf_describeunits: Invalid or NULL parameter"));
  while ((cpy = cpy->next) != NULL)
    {
      if (cpy->item != NULL)
	dtf_descunit(cpy->item);
    }
  return (1);
}

int	dtf_addunittolist(t_dtf *map, t_uni *unit)
{
  t_mls	*cpy;

  if (get_crtreturn(NULL))
    return (0);
  if (map == NULL || unit == NULL || (cpy = map->units) == NULL)
    return (dbgerr("Error: dtf_addunittolist: Invalid or NULL parameter"));
  if (is_unitinlist(map, unit->id))
    {
      gbgc_free(NULL, unit);
      return (dbgcrt("Error: dtf_addunittolist: Units multiple declaration"));
    }
  while (cpy->next != NULL)
    cpy = cpy->next;
  if (!list_addel(cpy, unit, NULL))
    return (dbgcrt("Error: dtf_addunittolist: Can't add the unit to the list"));
  return (1);
}

int	dtf_addunit(t_dtf *map, int x, int y)
{
  t_uni	*unit;

  if (get_crtreturn(NULL))
    return (0);
  if (map == NULL || map->map == NULL || x < 0 || y < 0 || x >= map->width ||
      y >= map->height)
    return (dbgerr("Error: dtf_addunit: NULL or invalid parameters"));
  if ((unit = build_uni()) == NULL)
    return (dbgcrt("Error: dtf_addunit: Impossible to create the unit"));
  unit->id = map->map[y][x];
  unit->px = x;
  unit->py = y;
  unit->life = UNITLF;
  unit->color = ((ISBLUE(unit->id)) ? BLUEPL : REDPLY);
  unit->used = 0;
  if (ISARCH(unit->id))
    unit->type = ((ISBLUE(unit->id)) ? BLUEAC : REDARC);
  else if (ISSLDR(unit->id))
    unit->type = ((ISBLUE(unit->id)) ? BLUESD : REDSDR);
  else if (ISKNGT(unit->id))
    unit->type = ((ISBLUE(unit->id)) ? BLUEKN : REDKNG);
  else
    unit->type = DEADTP;
  return (dtf_addunittolist(map, unit));
}

int	dtf_setunits(t_dtf *map)
{
  int	i;
  int	j;

  i = -1;
  if (get_crtreturn(NULL))
    return (0);
  if (map == NULL || map->map == NULL || map->units != NULL)
    return (dbgerr("Error: dtf_setunits: NULL or invalid parameters"));
  if ((map->units = createlist(NULL, NULL)) == NULL)
    return (dbgcrt("Error: dtf_setunits: createlist function returned NULL"));
  while (++i < map->height && map->map[i] != NULL)
    {
      j = -1;
      while (++j < map->width)
	{
	  if (ISERRV(map->map[i][j]))
	    return (dbgcrt("Error: dtf_setunits: Invalid value in the map"));
	  else if (ISREDV(map->map[i][j]) || ISBLUE(map->map[i][j]))
	    {
	      if (!dtf_addunit(map, j, i))
		return (dbgerr("Error: dtf_setunits: Add unit failed"));
	    }
	}
    }
  return (1);
}

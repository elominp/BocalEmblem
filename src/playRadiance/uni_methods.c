/*
** uni_methods.c for BocalEmblem in /home/guigui/BocalEmblem/src/playRadiance
** 
** Made by guigui
** Login   <guigui@epitech.net>
** 
** Started on  Sat May 16 10:01:29 2015 guigui
** Last update Sun May 17 12:37:27 2015 guigui
*/

#include <stdlib.h>
#include "strategic.h"
#include "my.h"
#include "my_printf.h"

int	is_strongagainst(t_uni *unita, t_uni *unitb)
{
  if (get_crtreturn(NULL))
    return (0);
  if (unita == NULL || unitb == NULL)
    return (dbgerr("Error: uni_attack: 1 or more NULL parameter"));
  return (((ISARCH(unita->id) && ISKNGT(unitb->id)) ||
	   (ISSLDR(unita->id) && ISARCH(unitb->id)) ||
	   (ISKNGT(unita->id) && ISSLDR(unitb->id))) ? 1 : 0);
}

int	uni_attack(t_uni *unita, t_uni *unitb, t_dtf *map)
{
  if (get_crtreturn(NULL))
    return (0);
  if (unita == NULL || unitb == NULL || map == NULL)
    return (dbgerr("Error: uni_attack: 1 or more NULL parameter"));
  if (unita->color == unitb->color)
    {
      my_printf("%s\n", ERRATK);
      return (dbgwrn(ERRATK));
    }
  unitb->life -= ATKUNI(unita, unitb);
  if (unitb->life <= 0)
    unitb->dead(unitb, map);
  return (1);
}

int	uni_move(t_uni *unit, t_dtf *map, int x, int y)
{
  char	*move;

  if (get_crtreturn(NULL))
    return (0);
  if (unit != NULL && map != NULL && unit->used)
    return (dbgwrn("Error: this unit is already used"));
  if (unit == NULL || map == NULL || x >= map->width || y >= map->height ||
      x < 0 || y < 0 || unit->color != map->actplayer || map->map[y][x] != 0)
    {
      my_putstr((unit->color == map->actplayer) ? ERRCMD : ERRTRN);
      return (dbgerr("Error: uni_move: Invalid parameters"));
    }
  map->map[unit->py][unit->px] = 0;
  if (unit->px != x)
    move = (x < unit->px) ? "left" : "right";
  else
    move = (y < unit->py) ? "up" : "down";
  unit->px = x;
  unit->py = y;
  unit->used = 1;
  map->map[unit->py][unit->px] = unit->id;
  my_printf("%d has move of 1 to %s\n", unit->id, move);
  return (1);
}

int	uni_dead(t_uni *unit, t_dtf *map)
{
  if (get_crtreturn(NULL))
    return (0);
  if (unit == NULL || map == NULL)
    return (dbgerr("Error: uni_dead: 1 or more NULL parameter"));
  return (1);
}

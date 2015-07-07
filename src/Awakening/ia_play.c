/*
** ia_play.c for BocalEmblem in /home/guigui/BocalEmblem
** 
** Made by guigui
** Login   <guigui@epitech.net>
** 
** Started on  Sun May 17 17:39:14 2015 guigui
** Last update Sun May 17 17:49:39 2015 guigui
*/

#include <stdlib.h>
#include "strategic.h"
#include "my_printf.h"

int     ia_movetonearestunit(t_dtf *m, t_uni *u)
{
  if (get_crtreturn(NULL) || m == NULL || u == NULL || u->used ||
      ISBLUE(m->map[u->py - 1][u->px]) || ISBLUE(m->map[u->py + 1][u->px]) ||
      ISBLUE(m->map[u->py][u->px + 1]) || ISBLUE(m->map[u->py][u->px - 1]) ||
      m->map[u->py + 1][u->px] == 1)
    return (0);
  return (m->move(m, u->id, DOWNCD));
}

int     ia_moveunits(t_dtf *map)
{
  t_mls *cpy;
  t_uni *tmp;

  if (get_crtreturn(NULL))
    return (0);
  if (map == NULL || (cpy = map->units) == NULL)
    return (dbgerr("Error: ia_moveunits: NULL parameter"));
  while ((cpy = cpy->next) != NULL && (tmp = cpy->item) != NULL)
    {
      if (tmp->color == map->actplayer)
        ia_movetonearestunit(map, tmp);
    }
  return (1);
}

int     ia_attacktonearestunit(t_dtf *map, t_uni *unit)
{
  if (get_crtreturn(NULL) || unit->used)
    return (0);
  if (map == NULL || unit == NULL)
    return (dbgerr("Error: ia_attack: NULL parameter"));
  if (ISBLUE(map->map[unit->py - 1][unit->px]))
    return (map->attack(map, unit->id, map->map[unit->py - 1][unit->px]));
  if (ISBLUE(map->map[unit->py + 1][unit->px]))
    return (map->attack(map, unit->id, map->map[unit->py + 1][unit->px]));
  if (ISBLUE(map->map[unit->py][unit->px - 1]))
    return (map->attack(map, unit->id, map->map[unit->py][unit->px - 1]));
  if (ISBLUE(map->map[unit->py][unit->px + 1]))
    return (map->attack(map, unit->id, map->map[unit->py][unit->px + 1]));
  return (0);
}

int     ia_attackunits(t_dtf *map)
{
  t_mls *cpy;
  t_uni *tmp;

  if (get_crtreturn(NULL))
    return (0);
  if (map == NULL || (cpy = map->units) == NULL)
    return (dbgerr("Error: ia_moveunits: NULL parameter"));
  while ((cpy = cpy->next) != NULL && (tmp = cpy->item) != NULL)
    {
      if (tmp->color == map->actplayer)
        ia_attacktonearestunit(map, tmp);
    }
  return (1);
}

int     ia_play(t_dtf *map)
{
  if (get_crtreturn(NULL) || map == NULL)
    return (0);
  ia_moveunits(map);
  ia_attackunits(map);
  my_printf("The IA has finished his turn\n");
  map->pass(map);
  return (1);
}

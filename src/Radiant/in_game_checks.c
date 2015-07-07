/*
** in_game_checks.c for BocalEmblem in /home/guigui/BocalEmblem/src/playRadiance
** 
** Made by guigui
** Login   <guigui@epitech.net>
** 
** Started on  Sat May 16 18:51:37 2015 guigui
** Last update Sun May 17 18:45:28 2015 guigui
*/

#include <stdlib.h>
#include "strategic.h"
#include "listes.h"

int	is_twoplayer(t_dtf *map)
{
  int	red;
  int	blue;
  t_mls	*cpy;
  t_uni	*tmp;

  red = 0;
  blue = 0;
  if (get_crtreturn(NULL))
    return (0);
  if (map == NULL || (cpy = map->units) == NULL)
    return (dbgerr("Error: is_twoplayer: There isn't a unit list"));
  while ((cpy = cpy->next) != NULL && (tmp = cpy->item) != NULL)
    {
      if (tmp->color == BLUEPL)
	blue = 1;
      if (tmp->color == REDPLY)
	red = 1;
    }
  return ((red && blue) ? 1 : 0);
}

int	is_oneredalive(t_dtf *map)
{
  t_mls	*cpy;
  t_uni	*tmp;

  if (get_crtreturn(NULL))
    return (0);
  if (map == NULL || (cpy = map->units) == NULL)
    return (dbgerr("Error: is_twoplayer: There isn't a unit list"));
  while ((cpy = cpy->next) != NULL && (tmp = cpy->item) != NULL)
    {
      if (tmp->color == REDPLY)
	return (1);
    }
  return (0);
}

int	is_onebluealive(t_dtf *map)
{
  t_mls *cpy;
  t_uni *tmp;

  if (get_crtreturn(NULL))
    return (0);
  if (map == NULL || (cpy = map->units) == NULL)
    return (dbgerr("Error: is_twoplayer: There isn't a unit list"));
  while ((cpy = cpy->next) != NULL && (tmp = cpy->item) != NULL)
    {
      if (tmp->color == BLUEPL)
        return (1);
    }
  return (0);
}

int	is_allunitused(t_dtf *map)
{
  int	color;
  t_mls *cpy;
  t_uni *tmp;

  if (get_crtreturn(NULL))
    return (0);
  if (map == NULL || (cpy = map->units) == NULL)
    return (dbgerr("Error: is_twoplayer: There isn't a unit list"));
  color = map->actplayer;
  while ((cpy = cpy->next) != NULL && (tmp = cpy->item) != NULL)
    {
      if (tmp->color == color && !tmp->used)
        return (0);
    }
  return (1);
}

int     is_unitinlist(t_dtf *map, int id)
{
  t_mls *cpy;
  t_uni *tmp;

  if (get_crtreturn(NULL))
    return (0);
  if (map == NULL || ISERRV(id) || (cpy = map->units) == NULL)
    return (dbgerr("Error: is_unitinlist: NULL or invalid parameter"));
  while ((cpy = cpy->next) != NULL && (tmp = cpy->item) != NULL)
    {
      if (tmp->id == id)
        return (1);
    }
  return (0);
}

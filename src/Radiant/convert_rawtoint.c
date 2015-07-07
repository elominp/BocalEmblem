/*
** convert_rawtoint.c for BocalEmblem in /home/guigui/BocalEmblem/src/playRadiance
** 
** Made by guigui
** Login   <guigui@epitech.net>
** 
** Started on  Sat May 16 13:22:49 2015 guigui
** Last update Sun May 17 11:51:23 2015 guigui
*/

#include <stdlib.h>
#include "playradiance.h"
#include "my.h"

int	check_borders(t_dtf *map)
{
  int	i;
  int	j;

  if (get_crtreturn(NULL))
    return (0);
  if (map == NULL || map->map == NULL)
    return (dbgerr("Error: check_borders: NULL or invalid parameters"));
  i = -1;
  while (++i < map->height)
    {
      j = -1;
      while (++j < map->width)
	{
	  if (((i == 0 || i == (map->height - 1)) ||
	       (j == 0 || j == (map->width - 1)))
	      && map->map[i][j] != 1)
	    return (dbgcrt("Error: check_borders: a wall is not a wall"));
	}
    }
  return (1);
}

int	get_mapwidth(char **tab)
{
  int	i;

  i = -1;
  if (get_crtreturn(NULL))
    return (0);
  if (tab != NULL)
    while (tab[++i] != NULL);
  return (i);
}

int	get_mapheight(char ***tab)
{
  int	i;

  i = -1;
  if (get_crtreturn(NULL))
    return (0);
  if (tab != NULL)
    while (tab[++i] != NULL);
  return (i);
}

int	check_maprect(t_dtf *map, char ***tab)
{
  int	i;

  i = -1;
  if (get_crtreturn(NULL))
    return (0);
  if (map == NULL || tab == NULL)
    return (dbgerr("Error: check_maprect: 1 or more NULL parameter"));
  while (++i < map->height && tab[i] != NULL)
    {
      if (get_mapwidth(tab[i]) != map->width)
	return (dbgcrt("Error: check_maprect: Invalid form of map"));
    }
  return ((i == map->height) ? 1 :
	  dbgcrt("Error: check_maprect: Invalid height of map"));
}

int	convert_rawtomap(t_dtf *map, char ***tab)
{
  int	i;
  int	j;

  i = -1;
  if (get_crtreturn(NULL))
    return (0);
  if (map == NULL || tab == NULL)
    return (dbgerr("Error: convert_rawtomap: 1 or more NULL parameter"));
  if ((map->map = gbgc_calloc(sizeof(int *) * (map->height + 1))) == NULL)
    return (dbgcrt("Error: convert_rawtomap: Allocation failed"));
  while (++i < map->height && tab[i] != NULL)
    {
      j = -1;
      if ((map->map[i] = gbgc_malloc(NULL, sizeof(int) * (map->width))) == NULL)
	return (dbgcrt("Error: convert_rawtomap: Allocation failed"));
      while (++j < map->width && tab[i][j] != NULL)
	{
	  if (!verifstr(tab[i][j]))
            return (dbgcrt("Error: convert_rawtomap: Invalid char"));
	  map->map[i][j] = my_atoi(tab[i][j]);
	}
    }
  map->map[i] = NULL;
  return (1);
}

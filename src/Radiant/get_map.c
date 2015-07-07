/*
** get_map.c for BocalEmblem in /home/guigui/BocalEmblem
** 
** Made by guigui
** Login   <guigui@epitech.net>
** 
** Started on  Sat May 16 12:06:57 2015 guigui
** Last update Sun May 17 11:49:01 2015 guigui
*/

#include <stdlib.h>
#include "strategic.h"
#include "my.h"

t_chk	*get_map(char *name)
{
  t_chk	*map;

  if (get_crtreturn(NULL))
    return (NULL);
  if (name == NULL)
    return (NULL);
  if ((map = build_chk()) == NULL)
    return ((t_chk *)dbgerr("Error: get_map: build struct failed"));
  map->name = my_strdup(name);
  map->check_extension(map);
  map->open_file(map);
  map->read_file(map);
  map->create_data(map);
  return (map);
}

int     verifstr(char *str)
{
  int   i;

  i = -1;
  if (get_crtreturn(NULL))
    return (0);
  if (str == NULL)
    return (dbgerr("Error: verifstr: NULL parameter"));
  while (str[++i])
    {
      if (str[i] < '0' || str[i] > '9')
        return (dbgerr("Error: verifstr: Invalid char found"));
    }
  return (1);
}

/*
** build_stccheck.c for BocalEmblem in /home/guigui/BocalEmblem/src/strategic
** 
** Made by guigui
** Login   <guigui@epitech.net>
** 
** Started on  Sat May 16 11:17:35 2015 guigui
** Last update Sun May 17 19:58:20 2015 guigui
*/

#include <stdlib.h>
#include <unistd.h>
#include "strategic.h"
#include "my.h"

t_chk	*build_chk()
{
  t_chk	*out;

  if (get_crtreturn(NULL))
    return (NULL);
  if ((out = gbgc_calloc(sizeof(t_chk))) == NULL)
    return ((t_chk *)dbgcrt("Error: build_chk: Failed allocation"));
  out->open_file = chk_openfile;
  out->read_file = chk_readfile;
  out->check_extension = chk_checkext;
  out->create_data = chk_createdt;
  out->describe = chk_describe;
  return (out);
}

int     delete_chk(t_chk *map)
{
  int   i;
  int   j;

  if (map == NULL)
    return (0);
  if (map->raw != NULL)
    {
      i = -1;
      while (map->raw[++i] != NULL)
        {
          j = -1;
          while (map->raw[i][++j] != NULL)
            gbgc_free(NULL, map->raw[i][j]);
          gbgc_free(NULL, map->raw[i]);
        }
      gbgc_free(NULL, map->raw);
    }
  if (map->name != NULL)
    gbgc_free(NULL, map->name);
  if (map->data != NULL)
    dtf_delete(map->data);
  if (map->exist_file >= 0)
    close(map->exist_file);
  return (1);
}

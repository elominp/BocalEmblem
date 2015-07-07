/*
** build_stcgame.c for BocalEmblem in /home/guigui/BocalEmblem/src/playRadiance
** 
** Made by guigui
** Login   <guigui@epitech.net>
** 
** Started on  Sat May 16 09:28:33 2015 guigui
** Last update Sat May 16 16:49:07 2015 guigui
*/

#include <stdlib.h>
#include "playradiance.h"
#include "my.h"

t_dtf	*build_dtf()
{
  t_dtf	*out;

  if (get_crtreturn(NULL))
    return (NULL);
  if ((out = gbgc_calloc(sizeof(t_dtf))) == NULL)
    return ((t_dtf *)dbgcrt("Error: build_dtf: Allocation failed"));
  out->actplayer = BLUEPL;
  out->move = dtf_move;
  out->strategic = dtf_strategic;
  out->pass = dtf_pass;
  out->createmap = dtf_createmap;
  out->createunits = dtf_createunits;
  return (out);
}

int	dtf_delete(t_dtf *data)
{
  if (get_crtreturn(NULL))
    return (0);
  if (data == NULL)
    return (0);
  if (data->map != NULL)
    free_strtab((char **)data->map);
  if (data->units != NULL)
    freelist(data->units, NULL);
  gbgc_free(NULL, data);
  return (1);
}

t_uni	*build_uni()
{
  t_uni	*out;

  if (get_crtreturn(NULL))
    return (NULL);
  if ((out = gbgc_calloc(sizeof(t_uni))) == NULL)
    return ((t_uni *)dbgcrt("Error: build_uni: Allocation failed"));
  out->attack = uni_attack;
  out->move = uni_move;
  out->dead = uni_dead;
  return (out);
}

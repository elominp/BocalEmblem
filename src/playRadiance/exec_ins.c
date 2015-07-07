/*
** exec_ins.c for BocalEmblem in /home/guigui/BocalEmblem/src/playRadiance
** 
** Made by guigui
** Login   <guigui@epitech.net>
** 
** Started on  Sat May 16 16:24:31 2015 guigui
** Last update Sun May 17 14:48:17 2015 guigui
*/

#include <stdlib.h>
#include "strategic.h"
#include "my.h"

int	exec_simpleins(t_dtf *map, char *ins)
{
  if (get_crtreturn(NULL))
    return (0);
  if (map == NULL || ins == NULL)
    return (dbgerr("Error: exec_simpleins: Invalid or NULL parameter"));
  if (!my_strcmp(ins, STRATG))
    return (map->strategic(map));
  else if (!my_strcmp(ins, PASSCD))
    return (map->pass(map));
  else if (!my_strcmp(ins, EXITCD))
    return (dbgcrt("A player has rage quit"));
  else
    {
      my_putstr(ERRCMD);
      return (dbgerr("Error: exec_simpleins: Unknow command"));
    }
  return (1);
}

int	exec_complexins(t_dtf *map, char **tab)
{
  if (get_crtreturn(NULL))
    return (0);
  if (map == NULL || tab == NULL)
    return (0);
  if (count_els((void **)tab) == 4 && !my_strcmp(tab[1], MOVECD) &&
      !my_strcmp(tab[2], TOWARD))
    return (map->move(map, my_atoi(tab[0]), tab[3]));
  else
    {
      my_putstr(ERRCMD);
      return (dbgerr("Error: exec_simpleins: Unknow command"));
    }
  return (1);
}

int	exec_ins(t_dtf *map, char *str)
{
  char	**tab;

  if (get_crtreturn(NULL))
    return (0);
  if (map == NULL || str == NULL || (tab = my_strtok(str, UNITOK)) == NULL ||
      (tab[0] == NULL))
    return (dbgerr("Error: exec_ins: NULL or invalid parameter"));
  if (tab[1] == NULL)
    return (exec_simpleins(map, tab[0]));
  else
    return (exec_complexins(map, tab));
  return (1);
}

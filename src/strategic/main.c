/*
** main.c for BocalEmblem in /home/guigui/BocalEmblem
** 
** Made by guigui
** Login   <guigui@epitech.net>
** 
** Started on  Fri May 15 20:23:32 2015 guigui
** Last update Sat May 16 16:19:16 2015 guigui
*/

#include <stdlib.h>
#include "my.h"
#include "strat.h"
#include "strategic.h"

void    init_game()
{
  gbgc_init();
  init_checkerrorreturn();
}

void    end_game()
{
  gbgc_erase(NULL);
  if (get_crtreturn(NULL))
    my_putstr(DEFERR);
}

int	mdescribe(t_chk *map)
{
  if (get_crtreturn(NULL))
    return (0);
  if (map == NULL || map->data == NULL || map->raw == NULL ||
      map->name == NULL)
    return (0);
  if (map->describe != NULL)
    return (map->describe(map));
  return (0);
}

int	main(int argc, char **argv)
{
  int	i;
  t_chk	*map;

  i = 0;
  if (argc <= 1 || argv == NULL)
    my_putstr(DEFERR);
  else
    {
      init_game();
      while (++i < argc && !get_crtreturn(NULL))
	{
	  map = get_map(argv[i]);
	  mdescribe(map);
	  delete_chk(map);
	}
      end_game();
    }
  return (0);
}

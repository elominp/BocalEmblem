/*
** main.c for BocalEmblem in /home/guigui/BocalEmblem
** 
** Made by guigui
** Login   <guigui@epitech.net>
** 
** Started on  Fri May 15 20:22:08 2015 guigui
** Last update Sun May 17 18:09:22 2015 guigui
*/

#include <stdlib.h>
#include "strategic.h"
#include "my.h"
#include "my_printf.h"

void	init_game()
{
  gbgc_init();
  init_checkerrorreturn();
}

void	end_game()
{
  gbgc_erase(NULL);
  if (get_crtreturn(NULL))
    my_putstr(DEFERR);
}

int	playmap(t_chk *map)
{
  char	*tmp;

  if (get_crtreturn(NULL))
    return (0);
  if (map == NULL || map->data == NULL || map->data->map == NULL ||
      !is_twoplayer(map->data))
    return (dbgerr("Error: playmap: Invalid or NULL parameter"));
  my_putstr(PROMPT);
  while (is_oneredalive(map->data) && is_onebluealive(map->data) &&
	 (tmp = get_next_line(0)) != NULL && !get_crtreturn(NULL))
    {
      exec_ins(map->data, tmp);
      gbgc_free(NULL, tmp);
      if (is_allunitused(map->data))
	map->data->pass(map->data);
      my_printf("\n%s", (!get_crtreturn(NULL)) ? PROMPT : "");
    }
  return (1);
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
	  playmap(map = get_map(argv[i]));
	  delete_chk(map);
	}
      end_game();
    }
  return (0);
}

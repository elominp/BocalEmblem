/*
** parsing.c for BocalEmblem in /home/rhyn_r/rendu/rushs/BocalEmblem/src/strategic
** 
** Made by 
** Login   <rhyn_r@epitech.net>
** 
** Started on  Fri May 15 21:10:49 2015 
** Last update Sat May 16 12:00:50 2015 
*/

#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "my.h"
#include "strat.h"

void	parsing(char **av)
{
  int	i;
  int	file;
  char	*s;

  i = 0;
  file = 0;
  s = "";
  if ((file = (open(av[1], O_RDONLY))) != -1)
    {
      while ((s = get_next_line(file)) != NULL);
      {
	my_putstr(s);
	free(s);
      }
    }
}

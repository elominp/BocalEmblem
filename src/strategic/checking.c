/*
** checking.c for BocalEmblem in /home/rhyn_r/rendu/rushs/BocalEmblem/I : The Sacred Stones
** 
** Made by 
** Login   <rhyn_r@epitech.net>
** 
** Started on  Fri May 15 20:27:20 2015 
** Last update Fri May 15 21:23:28 2015 
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "my.h"
#include "strat.h"

void	aff_stuff(char **av)
{
  my_putstr("- -");
  my_putstr(av[1]);
  my_putstr("- -\n");
}

int	checking_ext(char **av)
{
  int	i;

  i = my_strlen(av[1]);
  i = i - 4;
  if (av[1][i] == '.' && av[1][i + 1] == 'm' && av[1][i + 2] == 'a'
      && av[1][i + 3] == 'p' && av[1][i + 4] == 0)
    my_putstr("Extension is ok\n");
  else
    {
      my_putstr("Wrong extension\n");
      return (1);
    }
  return (0);
}

int	checking_is_file(char **av)
{
  int	e_check;

  e_check = 0;
  if ((e_check = (open(av[1], O_RDONLY))) == -1)
    {
      my_putstr("Error on open\n");
      return (1);
    }
  else
    {
      my_putstr("File is existing\n");
      e_check = checking_ext(av);
    }
  return (e_check);
}

void	checking(char **av)
{
  int	e_check;

  e_check = 0;
  aff_stuff(av);
  e_check = checking_is_file(av);
  if (e_check == 0)
    parsing(av);
}

/*
** my_strtab.c for mysh in /home/pirou_g/minishell2/src
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Feb  1 08:37:13 2015 Guillaume Pirou
** Last update Fri May 15 21:04:28 2015 guigui
*/

#include <stdlib.h>
#include "my.h"
#include "my_printf.h"
#include "my_mem.h"

int	my_count_strintab(char **tab)
{
  int	i;

  if (tab == NULL)
    return (-1);
  i = -1;
  while (tab[++i] != NULL);
  return (i);
}

char	**my_strtabdup(char **tab)
{
  char	**out;
  int	i;
  int	len;

  if (tab == NULL || (len = my_count_strintab(tab)) <= 0 ||
      (out = gbgc_malloc(NULL, sizeof(char *) * (len + 1))) == NULL)
    return (NULL);
  i = -1;
  while (++i < len)
    out[i] = my_strdup(tab[i]);
  out[i] = NULL;
  return (out);
}

void	free_strtab(char **tab)
{
  int	i;

  if (tab == NULL)
    return;
  i = -1;
  while (tab[++i] != NULL)
    gbgc_free(NULL, tab[i]);
  gbgc_free(NULL, tab);
}

void	my_putstrtab(char **tab)
{
  int	i;

  if (tab == NULL)
    return;
  i = -1;
  while (tab[++i] != NULL)
    my_printf("%s\n", tab[i]);
}

int	my_strtabsearch(char **tab, char *str)
{
  int	i;

  if (tab == NULL || str == NULL)
    return (0);
  i = -1;
  while (tab[++i] != NULL)
    {
      if (!my_strcmp(tab[i], str))
	return (1);
    }
  return (0);
}

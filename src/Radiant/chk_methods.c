/*
** chk_methods.c for BocalEmblem in /home/guigui/BocalEmblem/src/strategic
** 
** Made by guigui
** Login   <guigui@epitech.net>
** 
** Started on  Sat May 16 11:20:26 2015 guigui
** Last update Sun May 17 20:06:20 2015 guigui
*/

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "strategic.h"
#include "my.h"

int	chk_openfile(t_chk *file)
{
  if (get_crtreturn(NULL))
    return (0);
  if (file == NULL)
    return (dbgerr("Error: chk_openfile: NULL parameter"));
  file->exist_file = ((file->file = open(file->name, O_RDONLY)) > 0) ? 1 : 0;
  return (file->exist_file);
}

int	chk_checkext(t_chk *file)
{
  int	len;

  if (get_crtreturn(NULL))
    return (0);
  if (file == NULL || file->name == NULL)
    return (dbgerr("Error: chk_checkext: NULL or invalid parameter"));
  len = my_strlen(file->name);
  file->good_ext = ((len >= 4 && !my_strcmp(file->name + (len - 4), DEFEXT)) ?
		    1 : 0);
  return (file->good_ext);
}

int	chk_readfile(t_chk *file)
{
  char	***tab;
  char	**tmp;
  int	n;

  n = 0;
  if (get_crtreturn(NULL))
    return (0);
  if (file == NULL)
    return (dbgerr("Error: chk_readfile: NULL parameter"));
  if ((tab = gbgc_calloc(sizeof(char **) * (n + 1))) == NULL)
    return (dbgcrt("Error: chk_readfile: Allocation failed"));
  while ((tmp = my_strtok(get_next_line(file->file), UNITOK)) != NULL)
    {
      tab[n] = tmp;
      if ((tab = gbgc_realloc(tab, sizeof(char **) * (n + 1),
			      sizeof(char **) * (n + 2))) == NULL)
	return (dbgcrt("Error: chk_readfile: Allocation failed"));
      tab[++n] = NULL;
    }
  file->raw = tab;
  return (1);
}

int	chk_createdt(t_chk *file)
{
  if (get_crtreturn(NULL))
    return (0);
  if (file == NULL || file->raw == NULL)
    return (dbgerr("Error: chk_createdt: NULL or invalid parameter"));
  if ((file->data = build_dtf()) == NULL ||
      !file->data->createmap(file->data, file->raw) ||
      !file->data->createunits(file->data))
    return (dbgerr("Error: chk_createdt: Can't create data struct"));
  file->data->name = file->name;
  return (1);
}

int	chk_describe(t_chk *file)
{
  if (get_crtreturn(NULL))
    return (0);
  if (file == NULL || file->data == NULL || file->name == NULL)
    return (dbgerr("Error: chk_describe: NULL or invalid parameter"));
  my_putstr(my_strstick(my_strstick(CMTSTR, file->name), CMTSTR));
  my_putchar('\n');
  if (file->exist_file)
    my_putstr(EXISTF);
  else
    {
      my_putstr(DEFERR);
      return (0);
    }
  if (file->good_ext)
    my_putstr(EXTSOK);
  else
    {
      my_putstr(DEFERR);
      return (0);
    }
  if (!file->data->strategic(file->data))
    return (0);
  my_putstr(ENDSTR);
  return (1);
}

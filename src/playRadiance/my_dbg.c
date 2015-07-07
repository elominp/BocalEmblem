/*
** my_dbg.c for BocalEmblem in /home/guigui/BocalEmblem/src/playRadiance
** 
** Made by guigui
** Login   <guigui@epitech.net>
** 
** Started on  Sat May 16 10:19:31 2015 guigui
** Last update Sat May 16 10:30:34 2015 guigui
*/

#include <stdlib.h>
#include "playradiance.h"
#include "my.h"

long	dbgcrt(char *str)
{
  char	*out;

  if (str != NULL && (out = my_strstick(CRTHDR, CRTMSG)) != NULL &&
      (out = my_strstick(out, str)) != NULL &&
      (out = my_strstick(out, ENDHDR)) != NULL)
    {
      my_puterr(out);
      gbgc_free(NULL, out);
    }
  set_crtreturn(NULL, 1);
  return (0);
}

long	dbgerr(char *str)
{
  char  *out;

  if (str != NULL && (out = my_strstick(ERRHDR, ERRMSG)) != NULL &&
      (out = my_strstick(out, str)) != NULL &&
      (out = my_strstick(out, ENDHDR)) != NULL)
    {
      my_puterr(out);
      gbgc_free(NULL, out);
    }
  return (0);
}

long	dbgwrn(char *str)
{
  char  *out;

  if (str != NULL && (out = my_strstick(WRNHDR, WRNMSG)) != NULL &&
      (out = my_strstick(out, str)) != NULL &&
      (out = my_strstick(out, ENDHDR)) != NULL)
    {
      my_puterr(out);
      gbgc_free(NULL, out);
    }
  return (0);
}

long	dbgdok(char *str)
{
  char  *out;

  if (str != NULL && (out = my_strstick(DOKHDR, DOKMSG)) != NULL &&
      (out = my_strstick(out, str)) != NULL &&
      (out = my_strstick(out, ENDHDR)) != NULL)
    {
      my_puterr(out);
      gbgc_free(NULL, out);
    }
  return (1);
}

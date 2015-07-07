/*
** my_get_el.c for mysh in /home/pirou_g/minishell2/src
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Feb  1 08:28:51 2015 Guillaume Pirou
** Last update Sun Feb  1 08:28:53 2015 Guillaume Pirou
*/

int     my_get_el(char c, char *base)
{
  int   lp;

  lp = 0;
  while (base[lp] != '\0')
    {
      if (c == base[lp])
        return (lp);
      ++lp;
    }
  return (-1);
}

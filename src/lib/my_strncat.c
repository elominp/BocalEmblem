/*
** my_strncat.c for mysh in /home/pirou_g/minishell2/src
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Feb  1 08:36:34 2015 Guillaume Pirou
** Last update Sun Feb  1 08:36:35 2015 Guillaume Pirou
*/

char	*my_strncat(char *dest, char *src, int nb)
{
  int	ct;
  int	lp;

  ct = -1;
  while (dest[++ct] != '\0');
  lp = 0;
  while (src[lp] != '\0' && lp < nb)
  {
    dest[lp + ct] = src[lp];
    ++lp;
  }
  dest[lp + ct] = '\0';
  return (dest);
}

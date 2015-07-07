/*
** my_strncpy.c for mysh in /home/pirou_g/minishell2/src
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Feb  1 08:36:43 2015 Guillaume Pirou
** Last update Sun Feb  1 08:36:46 2015 Guillaume Pirou
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int	lp;

  lp = 0;
  while (lp < n && src[lp] != '\0')
    {
      dest[lp] = src[lp];
      ++lp;
    }
  if (lp < n)
    dest[lp] = '\0';
  return (dest);
}

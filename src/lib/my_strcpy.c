/*
** my_strcpy.c for mysh in /home/pirou_g/minishell2/src
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Feb  1 08:34:14 2015 Guillaume Pirou
** Last update Sun Feb  1 08:34:15 2015 Guillaume Pirou
*/

char	*my_strcpy(char *dest, char *src)
{
  int	lp;

  lp = 0;
  while (src[lp] != '\0')
    {
      dest[lp] = src[lp];
      ++lp;
    }
  dest[lp] = '\0';
  return (dest);
}

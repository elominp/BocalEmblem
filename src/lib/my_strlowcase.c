/*
** my_strlowcase.c for mysh in /home/pirou_g/minishell2/src
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Feb  1 08:36:14 2015 Guillaume Pirou
** Last update Sun Feb  1 08:36:14 2015 Guillaume Pirou
*/

char	*my_strlowcase(char *str)
{
  int   lp;

  lp = 0;
  while (str[lp] != '\0')
    {
      if (str[lp] >= 65 && str[lp] <= 90)
        str[lp] += 32;
      ++lp;
    }
  return (str);
}

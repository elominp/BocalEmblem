/*
** my_square_root.c for mysh in /home/pirou_g/minishell2/src
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Feb  1 08:33:32 2015 Guillaume Pirou
** Last update Sun Feb  1 08:33:33 2015 Guillaume Pirou
*/

int	my_square_root(int nb)
{
  int	i;

  i = 2;
  if (nb <= 0)
    return (0);
  else if (nb == 1)
    return (1);
  else
    while (1 == 1)
      {
	if ((i * i) == nb)
	  return (i);
	else if (i >= nb)
	  return (0);
	else
	  ++i;
      }
}

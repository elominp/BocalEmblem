/*
** my_power_it.c for mysh in /home/pirou_g/minishell2/src
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Feb  1 08:30:20 2015 Guillaume Pirou
** Last update Sun Feb  1 08:30:21 2015 Guillaume Pirou
*/

int		my_power_it(int nb, int power)
{
  int		loop;
  int		cp_nb;
  long int	res;

  loop = 1;
  cp_nb = nb;
  res = nb;
  if (power == 1)
    return (nb);
  if (power == 0)
    return (1);
  if (power < 0)
    return (0);
  while (loop < power)
    {
      res *= cp_nb;
      if (res > 2147483647)
	return (0);
      ++loop;
    }
  return (res);
}

/*
** my_power_rec.c for mysh in /home/pirou_g/minishell2/src
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Feb  1 08:30:31 2015 Guillaume Pirou
** Last update Sun Feb  1 08:30:32 2015 Guillaume Pirou
*/

int my_power_rec(int nb, int power)
{
  if (nb == 1)
    return (1);
  if (power == 0)
    return (1);
  if (power < 0 || power > 30)
    return (0);
  if (power == 1)
    return (nb);
  return (nb * my_power_rec(nb, power - 1));
}

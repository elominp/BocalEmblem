/*
** my_is_prime.c for mysh in /home/pirou_g/minishell2/src
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Feb  1 08:29:47 2015 Guillaume Pirou
** Last update Sun Feb  1 08:29:48 2015 Guillaume Pirou
*/

int	my_is_prime(int nb)
{
  int	i;

  i = 2;
  if (nb < 2)
    return (0);
  else
    {
      while (i < nb)
	{
	  if (nb % i == 0)
	    return (0);
	  ++i;
	}
      return (1);
    }
}

/*
** my_countnb_b.c for mysh in /home/pirou_g/minishell2/src
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Feb  1 08:27:48 2015 Guillaume Pirou
** Last update Sun Feb  1 08:27:48 2015 Guillaume Pirou
*/

int	my_countnb_b(int nb, int bs)
{
  int	lp;

  lp = 0;
  while (nb > 0)
    {
      nb /= bs;
      ++lp;
    }
  return (lp);
}

/*
** listes.h for mysh in /home/pirou_g/reminishell2/minishell2/include
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sat Mar  7 18:19:14 2015 Guillaume Pirou
** Last update Sun May 17 15:21:41 2015 guigui
*/

#ifndef LISTES_H_
# define LISTES_H_

# define MERROR -1
# define MFALSE  0
# define MTRUE   1

struct		s_list
{
  void		*item;
  struct s_list	*next;
  struct s_list	*prev;
};

typedef struct s_list t_mls;

int	list_freeel(t_mls *, void (*)(t_mls *));
int	list_addel(t_mls *, void *, void (*)(t_mls *, const void *));
int	list_delel(t_mls *, void (*)(t_mls *));
t_mls	*createlist(void *, void (*)(t_mls *, const void *));
int	freelist(t_mls *, void (*)(t_mls *));
int	printlist(t_mls *, void (*)(t_mls *));
int	ilistsort(t_mls *, int (*)(t_mls *, t_mls *));

#endif /* LISTES_H_ */

/*
** strategic.h for BocalEmblem in /home/guigui/BocalEmblem/include
** 
** Made by guigui
** Login   <guigui@epitech.net>
** 
** Started on  Sat May 16 11:00:10 2015 guigui
** Last update Sat May 16 16:44:00 2015 guigui
*/

#ifndef STRATEGIC_H_
# define STRATEGIC_H_

# include "playradiance.h"

# define DEFEXT ".map"
# define DEFERR "An error occured\n"

struct	s_chk
{
  t_dtf	*data;
  char	***raw;
  int	file;
  char	*name;
  int	exist_file;
  int	good_ext;
  int	(*open_file)(struct s_chk *);
  int	(*read_file)(struct s_chk *);
  int	(*check_extension)(struct s_chk *);
  int	(*create_data)(struct s_chk *);
  int	(*describe)(struct s_chk *);
};

typedef struct s_chk t_chk;

int	chk_openfile(t_chk *);
int	chk_readfile(t_chk *);
int	chk_checkext(t_chk *);
int	chk_createdt(t_chk *);
int	chk_describe(t_chk *);
t_chk   *build_chk();
t_chk   *get_map(char *);
int     delete_chk(t_chk *);
int     check_borders(t_dtf *);

#endif /* STRATEGIC_H_ */

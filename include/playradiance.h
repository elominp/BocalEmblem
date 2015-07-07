/*
** playradiance.h for BocalEmblem in /home/guigui/BocalEmblem/include
** 
** Made by guigui
** Login   <guigui@epitech.net>
** 
** Started on  Fri May 15 22:47:45 2015 guigui
** Last update Sun May 17 17:41:17 2015 guigui
*/

#ifndef PLAYRADIANCE_H_
# define PLAYRADIANCE_H_

# include "my_mem.h"

# define CMTSTR "--"
# define ENDSTR "--end--\n"
# define EXISTF "File is existing\n"
# define EXTSOK "Extension is OK.\n"
# define POSKBX 4
# define POSKBY 6
# define GETKBV(str) ((str != NULL) ? my_atoi(str) + 1 : 0)
# define COLORU 2
# define BLUEUN "blue"
# define REDUNI "red"
# define BLUEPL 1
# define REDPLY 2
# define DEADTP 0
# define BASICU 255
# define BLUEAC 1
# define BLUESD 2
# define BLUEKN 3
# define REDARC 4
# define REDSDR 5
# define REDKNG 6
# define BASATK 5
# define UNITLF 30
# define ATKUNI(v, d) ((is_strongagainst(v, d)) ? BASATK * 3 : BASATK)
# define ISARCH(v) (((v >= 11 && v <= 20) || (v >= 41 && v <= 50)) ? 1 : 0)
# define ISSLDR(v) (((v >= 21 && v <= 30) || (v >= 51 && v <= 60)) ? 1 : 0)
# define ISKNGT(v) (((v >= 31 && v <= 40) || (v >= 61 && v <= 70)) ? 1 : 0)
# define UNITVL 4
# define UNITPX 7
# define UNITOK " /"
# define ISENVV(n) ((n >= 0 && n <= 10) ? 1 : 0)
# define ISBLUE(n) ((n >= 11 && n <= 40) ? 1 : 0)
# define ISREDV(n) ((n >= 41 && n <= 70) ? 1 : 0)
# define ISERRV(n) ((n < 0 || n > 70) ? 1 : 0)
# define ISUNCD(str) ((ISBLUE(my_atoi(str)) || ISREDV(my_atoi(str))) ? 1 : 0)
# define MOVECD "move"
# define TOWARD "to"
# define FROMCD "from"
# define PUPCMD "up"
# define DOWNCD "down"
# define PRIGHT "right"
# define LEFTCD "left"
# define ARRPOS(str) ((str != NULL) ? my_strtok(str, UNITOK) : NULL)
# define STRATG "strategic"
# define ERRTRN "This is not your turn.\n"
# define ERRCMD "There is an error on your command.\n"
# define DESCMP(s, x, y) my_putstr("The "s" is "x" on "y)
# define DESCUN(c, n, x, y) my_putstr("The "c" unit "n" is in "x"/"y)
# define PASSCD "pass"
# define PROMPT ":> "
# define ATTACK "attack"
# define ERRATK "Can't attack a unit from the same side sir."
# define MSGATK(a, d, b) a" has attacked of "d" "b". "
# define MSGLFE(b, l) b" is "l" hp now."
# define CMDEAD(b) " [The "b" is dead].\n"
# define CRTHDR "[ \033[1;5;31mCRITICAL\033[0m ] "
# define ERRHDR "[ \033[1;31mERROR\033[0m ] "
# define WRNHDR "[ \033[1;33mWARNING\033[0m ] "
# define DOKHDR "[ \033[1;32mOK\033[0m ] "
# define ENDHDR "\033[0m\n"
# define CRTMSG "\033[1;41m"
# define ERRMSG "\033[1;41m"
# define WRNMSG "\033[1;43m"
# define DOKMSG "\033[1;42m"
# define SHOWMP "showmap"
# define ISUSED "isused"
# define EXITCD "exit"

struct	s_dtf
{
  char	*name;
  int	**map;
  int	height;
  int	width;
  int	player;
  t_mls	*units;
  t_mls	*actunit;
  int	actplayer;
  int	(*createmap)(struct s_dtf *, char ***);
  int	(*createunits)(struct s_dtf *);
  int	(*move)(struct s_dtf *, int, char *);
  int	(*strategic)(struct s_dtf *);
  int	(*pass)(struct s_dtf *);
  int	(*attack)(struct s_dtf *, int, int);
  int	(*show_map)(struct s_dtf *);
  int	(*is_unitused)(struct s_dtf *, int);
};
struct	s_uni
{
  int	id;
  int	color;
  int	type;
  int	life;
  int	px;
  int	py;
  int	used;
  int	(*attack)(struct s_uni *, struct s_uni *, struct s_dtf *);
  int	(*move)(struct s_uni *, struct s_dtf *, int, int);
  int	(*dead)(struct s_uni *, struct s_dtf *);
};

typedef struct s_dtf t_dtf;
typedef struct s_uni t_uni;

long    my_puterr(char *);
int     set_crtreturn(int *, int);
int     get_crtreturn(int *);
int     init_checkerrorreturn();
t_dtf   *build_dtf();
t_uni   *build_uni();
int     dtf_delete(t_dtf *);
int     uni_attack(t_uni *, t_uni *, t_dtf *);
int     uni_move(t_uni *, t_dtf *, int, int);
int     uni_dead(t_uni *, t_dtf *);
int     dtf_move(t_dtf *, int, char *);
int     dtf_strategic(t_dtf *);
int     dtf_pass(t_dtf *);
int     dtf_createmap(t_dtf *, char ***);
int     dtf_createunits(t_dtf *);
int     dtf_attack(t_dtf *, int, int);
int     dtf_showmap(t_dtf *);
int     dtf_isunitused(t_dtf *, int);
long    dbgcrt(char *);
long    dbgerr(char *);
long    dbgwrn(char *);
long    dbgdok(char *);
int     get_mapwidth(char **);
int     get_mapheight(char ***);
int     check_maprect(t_dtf *, char ***);
int     convert_rawtomap(t_dtf *, char ***);
int     dtf_addunittolist(t_dtf *, t_uni *);
int     dtf_addunit(t_dtf *, int, int);
int     dtf_setunits(t_dtf *);
int     dtf_describeunits(t_dtf *);
int     dtf_descunit(t_uni *);
int     exec_ins(t_dtf *, char *);
int     exec_complexins(t_dtf *, char **);
int     exec_simpleins(t_dtf *, char *);
t_uni   *get_unitbyid(t_dtf *, int);
int	is_twoplayer(t_dtf *);
int	is_oneredalive(t_dtf *);
int	is_onebluealive(t_dtf *);
int	is_allunitused(t_dtf *);
int     is_unitinlist(t_dtf *, int);
int	verifstr(char *);
int     calc_dist(int, int, int, int);
int     ia_play(t_dtf *);

#endif /* PLAYRADIANCE_H_ */

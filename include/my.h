/*
** my.h for mysh in /home/pirou_g/minishell2/include
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Feb  1 08:26:01 2015 Guillaume Pirou
** Last update Sun May 17 15:24:00 2015 guigui
*/

#ifndef LIBMY_H_
# define LIBMY_H

# define MAX 214748364
# define BUFFER_SIZE 1
# define MEOF     0
# define NEOF    1
# define MABS(x) ((x < 0) ? (x * -1) : x)

struct s_gnl
{
  char	buff[BUFFER_SIZE + 1];
  int	fd;
  int	csr;
  int	status;
};

typedef struct s_gnl t_gnl;

char	*my_strdup(char *);
int	my_verifc(char *, int);
int	my_is_prime(int);
char	*my_strnbr(int, char *);
void	my_fill_tab(char, char **, int);
void	my_clean_tab(char **, int);
char	**my_str_to_wordtab(char *);
int	my_show_wordtab(char **);
int	*the_litlest(int *, int, int);
void	my_print_b_16(unsigned long, int);
void	my_show_row(char *, int, int);
void	my_putchar(char );
int	my_isneg(int);
int	my_put_nbr(int);
void	my_swap(void *, void *);
int	my_putstr(char *);
int	my_strlen(char *);
int	my_getnbr(char *);
void	my_sort_int_tab(int *, int);
int	my_power_rec(int, int);
int	my_power_it(int, int);
int	my_square_root(int);
int	my_is_prime(int);
int	my_find_prime_sup(int);
int	my_get_nbr(int);
int	my_putnbr_base(long, char *);
int	my_getnbr_base(char *, char *);
char	*my_strcpy(char *, char *);
char	*my_strncpu(char *, char *, int);
char	*my_revstr(char *);
char	*my_strstr(char *, char *);
int	my_strcmp(char *, char *);
int	my_strncmp(char *, char *, int);
char	*my_strupcase(char *);
char	*my_strlowcase(char *);
char	*my_strcapitalize(char *);
int	my_str_isalpha(char *);
int	my_str_isnum(char *);
int	my_str_islower(char *);
int	my_str_isupper(char *);
int	my_str_isprintable(char *);
int	my_showstr(char *);
int	my_showmem(char *, int);
char	*my_strcat(char *, char *);
char	*my_strncat(char *, char *, int);
int	my_strlcat(char *, char *, int);
int	my_countnb_b(int, int);
int	my_get_el(char, char *);
int	my_string_to_int(char *, int);
char	*get_begin(char *, int *);
int	my_check(char *);
int	my_pow(int, int);
int	my_count_nb(int);
void	my_loop(int, int, int);
int	my_printnbr(long, char *, int);
int	my_atoi(char *);
int	my_isnum(char);
void	my_putchar2(char);
void	my_putstr2(char *);
long	my_round(double);
char	*my_strstick(char *, char *);
char	**my_strtok(char *, char *);
void	my_tokcut(char *, char *);
int	cnt_tok(char *, char *);
int	is_del(char, char *);
int	my_count_strintab(char **);
char	**my_strtabdup(char **);
void	free_strtab(char **);
void	my_putstrtab(char **);
int	my_strtabsearch(char **, char *);
char	*my_readstdin();
char	*my_readstdinloop(char *, char *);
char	*my_getabsolutepath(char *, char **);
char	*get_next_line(const int);
int     count_els(void **);

#endif /* LIBMY_H_ */

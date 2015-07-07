##
## Makefile for BocalEmblem in /home/guigui/BocalEmblem
## 
## Made by guigui
## Login   <guigui@epitech.net>
## 
## Started on  Fri May 15 20:10:13 2015 guigui
## Last update Sun May 17 19:46:15 2015 guigui
##

STRATEGIC	= strategic

PLAYRADIANCE	= playRadiance

RADIANT		= Radiant

AWAKENING	= Awakening

BINFOLDER	= binaries

BINSTR		= $(BINFOLDER)/$(STRATEGIC)

BINPLR		= $(BINFOLDER)/$(PLAYRADIANCE)

BINRAD		= $(BINFOLDER)/$(RADIANT)

BINAWK		= $(BINFOLDER)/$(AWAKENING)

GLOBSRC		= src/lib/convert_base.c \
		  src/lib/get_next_line.c \
		  src/lib/get_option.c \
		  src/lib/is_option.c \
		  src/lib/listes2.c \
		  src/lib/listes.c \
		  src/lib/my_atoi.c \
		  src/lib/my_countnb_b.c \
		  src/lib/my_epur_str.c \
		  src/lib/my_find_prime_sup.c \
		  src/lib/my_get_el.c \
		  src/lib/my_getnbr_base.c \
		  src/lib/my_getnbr.c \
		  src/lib/my_isneg.c \
		  src/lib/my_is_prime.c \
		  src/lib/my_malloc.c \
		  src/lib/my_malloc2.c \
		  src/lib/my_parse.c \
		  src/lib/my_power_it.c \
		  src/lib/my_power_rec.c \
		  src/lib/my_printf.c \
		  src/lib/my_putblank.c \
		  src/lib/my_put.c \
		  src/lib/my_putchar.c \
		  src/lib/my_putchar2.c \
		  src/lib/my_putint.c \
		  src/lib/my_putnbr_base.c \
		  src/lib/my_put_nbr.c \
		  src/lib/my_putptr.c \
		  src/lib/my_putstr2.c \
		  src/lib/my_putstr.c \
		  src/lib/my_revstr.c \
		  src/lib/my_round.c \
		  src/lib/my_showstr.c \
		  src/lib/my_show_wordtab.c \
		  src/lib/my_sort_int_tab.c \
		  src/lib/my_square_root.c \
		  src/lib/my_strcapitalize.c \
		  src/lib/my_strcat.c \
		  src/lib/my_strcmp.c \
		  src/lib/my_strcpy.c \
		  src/lib/my_strdup.c \
		  src/lib/my_str_isalpha.c \
		  src/lib/my_str_islower.c \
		  src/lib/my_str_isnum.c \
		  src/lib/my_str_isprintable.c \
		  src/lib/my_str_isupper.c \
		  src/lib/my_strlen.c \
		  src/lib/my_strlowcase.c \
		  src/lib/my_strnbr.c \
		  src/lib/my_strncat.c \
		  src/lib/my_strncmp.c \
		  src/lib/my_strncpy.c \
	 	  src/lib/my_strstr.c \
		  src/lib/my_strtab.c \
		  src/lib/my_strtok.c \
		  src/lib/my_str_to_wordtab.c \
		  src/lib/my_strupcase.c \
		  src/lib/my_swap.c \
		  src/lib/my_uppercase.c \
		  src/lib/worknb.c \
		  src/lib/count_els.c

STRSRC		= src/strategic/main.c \
		  src/strategic/build_stccheck.c \
	 	  src/strategic/chk_methods.c \
		  src/playRadiance/my_puterr.c \
		  src/playRadiance/uni_methods.c \
		  src/playRadiance/dtf_methods.c \
		  src/playRadiance/my_dbg.c \
		  src/playRadiance/build_stcgame.c \
		  src/strategic/get_map.c \
		  src/playRadiance/convert_rawtoint.c \
		  src/playRadiance/dtf_setunits.c \
		  src/playRadiance/get_unitbyid.c \
		  src/playRadiance/in_game_checks.c

PLRSRC		= src/playRadiance/main.c \
		  src/playRadiance/my_puterr.c \
		  src/playRadiance/uni_methods.c \
		  src/playRadiance/dtf_methods.c \
		  src/playRadiance/my_dbg.c \
		  src/playRadiance/build_stcgame.c \
		  src/playRadiance/convert_rawtoint.c \
		  src/playRadiance/dtf_setunits.c \
		  src/strategic/build_stccheck.c \
		  src/strategic/chk_methods.c \
		  src/strategic/get_map.c \
		  src/playRadiance/exec_ins.c \
		  src/playRadiance/get_unitbyid.c \
		  src/playRadiance/in_game_checks.c

RADSRC		= src/Radiant/main.c \
		  src/Radiant/build_stccheck.c \
		  src/Radiant/build_stcgame.c \
		  src/Radiant/chk_methods.c \
		  src/Radiant/convert_rawtoint.c \
		  src/Radiant/dtf_methods.c \
		  src/Radiant/dtf_setunits.c \
		  src/Radiant/exec_ins.c \
		  src/Radiant/get_map.c \
		  src/Radiant/get_unitbyid.c \
		  src/Radiant/in_game_checks.c \
		  src/Radiant/my_dbg.c \
		  src/Radiant/my_puterr.c \
		  src/Radiant/uni_methods.c \
		  src/Radiant/dtf_methods2.c

AWKSRC		= src/Awakening/main.c \
		  src/Awakening/build_stccheck.c \
		  src/Awakening/build_stcgame.c \
		  src/Awakening/chk_methods.c \
		  src/Awakening/convert_rawtoint.c \
		  src/Awakening/dtf_methods.c \
		  src/Awakening/dtf_methods2.c \
		  src/Awakening/dtf_setunits.c \
		  src/Awakening/exec_ins.c \
		  src/Awakening/get_map.c \
		  src/Awakening/get_unitbyid.c \
		  src/Awakening/in_game_checks.c \
		  src/Awakening/my_dbg.c \
		  src/Awakening/my_puterr.c \
		  src/Awakening/uni_methods.c \
		  src/Awakening/ia_play.c

STROBJ		= $(STRSRC:.c=.o)

PLROBJ		= $(PLRSRC:.c=.o)

RADOBJ		= $(RADSRC:.c=.o)

AWKOBJ		= $(AWKSRC:.c=.o)

GLOBOBJ		= $(GLOBSRC:.c=.o)

STRBKP		= $(STRSRC:.c=.c~)

PLRBKP		= $(PLRSRC:.c=.c~)

RADBKP		= $(RADSRC:.c=.c~)

AWKBKP		= $(AWKSRC:.c=.c~)

GLOBKP		= $(GLOBSRC:.c=.c~)

CC		= cc

CFLAGS		= -W -Wall -Wextra -ansi -pedantic -I./include

LFDFLAGS	=

RM		= rm -rf

HEADERS		= include/listes.h \
		  include/my.h \
		  include/my_mem.h \
		  include/my_printf.h \
		  include/playradiance.h \
		  include/strategic.h

HDSBKP		= $(HEADERS:.h=.h~)

BKPS		= $(STRBKP) $(PLRBKP) $(RADBKP) $(HDSBKP) $(GLOBKP) Makefile~ \
		  $(AWKBKP)

all:		$(BINSTR) $(BINPLR) $(BINRAD) $(BINAWK)

$(BINSTR):	$(STROBJ) $(GLOBOBJ)
		$(CC) $(STROBJ) $(GLOBOBJ) -o $(BINSTR)

$(BINPLR):	$(PLROBJ)
		$(CC) $(PLROBJ) $(GLOBOBJ) -o $(BINPLR)

$(BINRAD):	$(RADOBJ)
		$(CC) $(RADOBJ) $(GLOBOBJ) -o $(BINRAD)

$(BINAWK):	$(AWKOBJ)
		$(CC) $(AWKOBJ) $(GLOBOBJ) -o $(BINAWK)

clean:
		$(RM) $(STROBJ) $(PLROBJ) $(RADOBJ) $(AWKOBJ) $(GLOBOBJ) $(BKPS)

fclean:		clean
		$(RM) $(BINSTR) $(BINPLR) $(BINRAD) $(BINAWK)

re:		fclean all

test:		re
		cd ./tests ; ./strategic.sh

.PHONY:		all clean fclean re

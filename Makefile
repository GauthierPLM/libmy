##
## Makefile for libmy in /home/pogam-_g/dev/C/lib/my
##
## Made by gauthier pogam-lemontagner
## Login   <pogam-_g@epitech.net>
##
## Started on  Mon Dec 22 15:36:46 2014 gauthier pogam-lemontagner
## Last update Tue Apr  7 01:42:55 2015 gauthier pogam-lemontagner
##

C89	= no

DEBUG	= yes

DETAILS	= no

TESTS	= no

CC	= gcc

RM	= rm -f

CFLAGS	+= -Wextra -Wall
CFLAGS	+= -I "include/"

ifeq ($(DEBUG),yes)
	CFLAGS	+= -g
endif

ifeq ($(C89),yes)
	CFLAGS	+= -std=c89 -pedantic
endif

LDFLAGS	+=

NAME	= libmy.a

OBJDIR = obj

GETTERS	= src/getters/get_next_line.c				\
	  src/getters/my_get_next_word.c			\
	  src/getters/my_get_str_from_nbr.c			\
	  src/getters/my_getenv.c				\
	  src/getters/my_getnbr.c				\
	  src/getters/my_getnbr_base.c				\

IS	= src/is/my_is_alnum.c					\
	  src/is/my_is_printable.c				\
	  src/is/my_str_is_alnum.c				\
	  src/is/my_str_is_alpha.c				\
	  src/is/my_str_is_in_tab.c				\
	  src/is/my_str_is_lower.c				\
	  src/is/my_str_is_num.c				\
	  src/is/my_str_is_printable.c				\
	  src/is/my_str_is_upper.c				\

PRINTF	= src/my_printf/chars_functions.c			\
	  src/my_printf/my_printf.c				\
	  src/my_printf/number1_functions.c			\
	  src/my_printf/number2_functions.c			\

MY	= src/nbr/my_nbr_to_binary.c				\
	  src/nbr/my_nbrlen.c					\
	  src/nbr/my_power.c					\
	  src/nbr/my_square_root.c				\
	  src/nbr/my_swap_int.c					\

PUT	= src/put/my_put_nbr_base.c				\
	  src/put/my_put_unsigned_nbr.c				\
	  src/put/my_putchar.c					\
	  src/put/my_putnbr.c					\
	  src/put/my_putstr.c					\

STR 	= src/str/my_count_word.c				\
	  src/str/my_count_word_c.c				\
	  src/str/my_epur_str.c					\
	  src/str/my_fusion.c					\
	  src/str/my_lower.c					\
	  src/str/my_rev_str.c					\
	  src/str/my_str_capitalize.c				\
	  src/str/my_str_replace.c				\
	  src/str/my_str_str.c					\
	  src/str/my_strcat.c					\
	  src/str/my_strccpy.c					\
	  src/str/my_strcmp.c					\
	  src/str/my_strcpy.c					\
	  src/str/my_strdup.c					\
	  src/str/my_strlen.c					\
	  src/str/my_strncat.c					\
	  src/str/my_strncmp.c					\
	  src/str/my_strncpy.c					\
	  src/str/my_upper.c					\

TAB	= src/tab/my_add_to_tab.c				\
	  src/tab/my_free_tab.c					\
	  src/tab/my_remove_from_tab.c				\
	  src/tab/my_sort_int_tab.c				\
	  src/tab/my_str_to_wordtab.c				\
	  src/tab/my_str_to_wordtab_c.c				\
	  src/tab/my_tab_join.c					\
	  src/tab/my_tab_len.c					\

X	= src/x/xclose.c					\
	  src/x/xfork.c						\
	  src/x/xmalloc.c					\
	  src/x/xopen.c						\
	  src/x/xpipe.c						\

SRCS	= $(GETTERS) $(IS) $(PRINTF) $(NBR) $(PUT) $(STR) $(TAB) $(X)

OBJS	= $(SRCS:src/%.c=$(OBJDIR)/%.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	@mkdir -p lib
	@ar rc lib/$(NAME) $(OBJS)
	@ranlib lib/$(NAME)
	@cp lib/$(NAME) ../$(NAME)
	@mkdir -p ../../include && mkdir -p ../../include/libmy \
	&& cp include/libmy/my.h ../../include/libmy/
	@echo "$(NAME) compiled in debug mode."
ifeq ($(TESTS),yes)
	@echo -e "\nCompile tests ..."
	@make -C tests/
	@echo -e "Tests compiled."
endif

$(OBJDIR)/%.o:	src/%.c
	@mkdir -p $(dir $@)
ifeq ($(DETAILS),yes)
	$(CC) $(CFLAGS) -c $< -o $@
else
	@echo -e "Compile:\t$<"
	@$(CC) $(CFLAGS) -c $< -o $@
endif

.NOTPARALLEL: fclean clean

.PHONY: tests clean fclean re

tests:
	@echo -e "\nCompile tests ..."
	@make re -C tests/
	@echo -e "Tests compiled."

clean:
	@echo "Cleaning library' object files ..."
	@$(RM) $(OBJS)
	@$(RM) -r obj/
	@echo "Library' object files cleaned."

fclean:	clean
	@echo "Cleaning library' files ..."
	@$(RM) lib/$(NAME)
	@$(RM) ../$(NAME)
ifeq ($(TESTS),yes)
	make fclean -C tests/
endif
	@echo "Library' files cleaned."

re:	fclean all

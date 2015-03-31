##
## Makefile for libmy in /home/pogam-_g/dev/C/lib/my
##
## Made by gauthier pogam-lemontagner
## Login   <pogam-_g@epitech.net>
##
## Started on  Mon Dec 22 15:36:46 2014 gauthier pogam-lemontagner
## Last update Thu Jan 22 16:20:44 2015 gauthier pogam-lemontagner
##

CC	= gcc

RM	= rm -f

CFLAGS	+= -Wextra -Wall
CFLAGS	+= -I "include/"

LDFLAGS	+=

NAME	= libmy.a

OBJDIR = obj

SRCS	= src/my_printf/chars_functions.c		\
	  src/my_printf/my_printf.c			\
	  src/my_printf/number1_functions.c		\
	  src/my_printf/number2_functions.c		\
	  src/get_next_line.c				\
	  src/my_count_word.c				\
	  src/my_count_word_c.c				\
	  src/my_fusion.c				\
	  src/my_get_next_word.c			\
	  src/my_get_str_from_nbr.c			\
	  src/my_getenv.c				\
	  src/my_getnbr.c				\
	  src/my_getnbr_base.c				\
	  src/my_is_alnum.c				\
	  src/my_is_printable.c				\
	  src/my_nbr_len.c				\
	  src/my_nbr_to_binary.c			\
	  src/my_power.c				\
	  src/my_put_nbr.c				\
	  src/my_put_nbr_base.c				\
	  src/my_put_unsigned_nbr.c			\
	  src/my_putchar.c				\
	  src/my_putstr.c				\
	  src/my_rev_str.c				\
	  src/my_sort_int_tab.c				\
	  src/my_square_root.c				\
	  src/my_str_capitalize.c			\
	  src/my_str_is_alpha.c				\
	  src/my_str_is_alpha_num.c			\
	  src/my_str_is_lower.c				\
	  src/my_str_is_num.c				\
	  src/my_str_is_printable.c			\
	  src/my_str_is_upper.c				\
	  src/my_str_lower_case.c			\
	  src/my_str_str.c				\
	  src/my_str_to_wordtab.c			\
	  src/my_str_to_wordtab_c.c			\
	  src/my_str_upper_case.c			\
	  src/my_strcat.c				\
	  src/my_strcmp.c				\
	  src/my_strcpy.c				\
	  src/my_strdup.c				\
	  src/my_strlen.c				\
	  src/my_strncat.c				\
	  src/my_strncmp.c				\
	  src/my_strncpy.c				\
	  src/my_swap_int.c				\
	  src/my_tab_len.c				\
	  src/xclose.c					\
	  src/xfork.c					\
	  src/xmalloc.c					\
	  src/xopen.c					\
	  src/xpipe.c

OBJS	= $(SRCS:src/%.c=$(OBJDIR)/%.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@mv $(NAME) ../
	@mkdir -p ../../include && mkdir -p ../../include/libmy \
	&& cp -R include/libmy/ ../../include/

$(OBJDIR)/%.o:	src/%.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean fclean re

clean:
	@echo "Cleaning library' object files ..."
	@$(RM) $(OBJS)
	@$(RM) -r obj/
	@echo "Library' object files cleaned."

fclean:	clean
	@echo "Cleaning library' files ..."
	@$(RM) lib/$(NAME)
	@$(RM) -r lib/
	@$(RM) ../$(NAME)
	@echo "Library' files cleaned."

re:	fclean all

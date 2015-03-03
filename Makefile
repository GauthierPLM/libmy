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

CFLAGS	+= -Wextra -Wall -Werror
CFLAGS	+= -ansi -pedantic
CFLAGS	+= -I "include/"

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
	  src/my_getenv.c				\
	  src/my_getnbr.c				\
	  src/my_getnbr_base.c				\
	  src/my_is_alnum.c				\
	  src/my_is_printable.c				\
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
	  src/my_str_cmp.c				\
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
	  src/my_strcpy.c				\
	  src/my_strdup.c				\
	  src/my_strlen.c				\
	  src/my_strncat.c				\
	  src/my_strncmp.c				\
	  src/my_strncpy.c				\
	  src/my_swap_char.c				\
	  src/my_swap_char_pointer.c			\
	  src/my_swap_int.c				\
	  src/my_tab_len.c				\
	  src/xfork.c					\
	  src/xmalloc.c

OBJS	= $(SRCS:src/%.c=$(OBJDIR)/%.o)

CPL	= cp lib/libmy.a ../

CPH	= mkdir -p ../../include \
	  && mkdir -p ../../include/libmy \
	  && cp -R include/libmy/ ../../include/

all:	$(NAME)

$(OBJDIR)/%.o:	src/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
	mkdir -p lib/
	mv $(NAME) lib/

lib:	${NAME}
	${CPL}
	${CPH}

clean:
	$(RM) $(OBJS)
	$(RM) -r obj/

fclean:	clean
	$(RM) lib/$(NAME)
	$(RM) -r lib/
	$(RM) ../$(NAME)

re:	fclean all

##
## Makefile for libmy in /home/pogam-_g/dev/C/lib/my/tests
##
## Made by gauthier pogam-lemontagner
## Login   <pogam-_g@epitech.net>
##
## Started on  Thu May 14 22:45:39 2015 gauthier pogam-lemontagner
## Last update Thu May 14 22:45:40 2015 gauthier pogam-lemontagner
##

DEBUG	= yes

DETAILS	= no

CC	= gcc

RM	= rm -f

CFLAGS	+= -Wextra -Wall
CFLAGS	+= -I "../include/"

ifeq ($(DEBUG),yes)
	CFLAGS	+= -g
endif

LDFLAGS	+= -L ../lib/ -lmy

NAME	= test-libmy

OBJDIR = obj

STR	= src/str/my_str_replace.c

TAB	= src/tab/my_tab_join.c

SRCS	= $(STR) $(TAB) src/main.c

OBJS	= $(SRCS:src/%.c=$(OBJDIR)/%.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	@$(CC) $(OBJS) -o ../$(NAME) $(LDFLAGS) $(CFLAGS)
	@mkdir -p ../../../include && mkdir -p ../../../include/libmy \
	&& mkdir -p ../../../include/libmy/tests \
	&& cp include/libmy/tests/my_tests.h ../../../include/
ifeq ($(DEBUG),yes)
	@echo "$(NAME) compiled in debug mode."
endif

$(OBJDIR)/%.o:	src/%.c
	@mkdir -p $(dir $@)
ifeq ($(DETAILS),yes)
	$(CC) $(CFLAGS) -c $< -o $@
else
	@echo -e "Compile tests:\t$<"
	@$(CC) $(CFLAGS) -c $< -o $@
endif

.PHONY: clean fclean re

clean:
	@echo "Cleaning tests' object files ..."
	@$(RM) $(OBJS)
	@$(RM) -r obj/
	@echo "Library' tests files cleaned."

fclean:	clean
	@echo "Cleaning tests file ..."
	@$(RM) ../$(NAME)
	@echo "test' file cleaned."

re:	fclean all

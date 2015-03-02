/*
** my.h for libmy in /home/pogam-_g/dev/C/lib/my/include/libmy
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Mon Dec 22 15:34:26 2014 gauthier pogam-lemontagner
** Last update Mon Dec 22 15:34:27 2014 gauthier pogam-lemontagner
*/

#ifndef MY_H_
#define MY_H_


#include <stddef.h>

char	*get_next_line(const int fd);

int	my_count_word(char *str);

int 	my_fprintf(int fd, char *str, ...);

char	*my_fusion(char *s1, char *s2);

char 	*my_getenv(char *var, char **ae);

int	my_getnbr(char *s);

int	my_getnbr_base(char *str, char *base);

int	my_is_printable(char c);

long	my_power(long nb, long power);

int 	my_printf(char *str, ...);

int	my_put_nbr(long nbr, int fd);

int	my_put_nbr_base(long nbr, char *base, int fd);

int	my_put_unsigned_nbr(unsigned long nbr, char *base, int fd);

int 	my_putchar(char c, int fd);

int	my_putstr(char *str, int escape, int fd);

char	*my_rev_str(char *str);

void	my_sort_int_tab(int *table, int size);

int	my_square_root(int nb);

char	*my_str_capitalize(char *str);

int	my_str_cmp(char *s1, char *s2);

int	my_str_is_alpha_num(char *str);

int	my_str_is_alpha(char *str);

int	my_str_is_lower(char *str);

int	my_str_is_num(char *str);

int	my_str_is_printable(char *str);

int	my_str_is_upper(char *str);

char	*my_str_lower_case(char *str);

char	*my_str_str(char *str, char *to_find);

char    **my_str_to_wordtab(char *str);

char	*my_str_upper_case(char *str);

char	*my_strcat(char *dest, char *src);

char	*my_strcpy(char *dest, char *src);

char	*my_strdup(char *str);

int	my_strlen(char *str);

char	*my_strncat(char *dest, char *src, int n);

int	my_strncmp(char *s1, char *s2, int n);

char	*my_strncpy(char *dest, char *src, int n);

void	my_swap_char(char *a, char *b);

void	my_swap_char_pointer(char *a, char *b);

void	my_swap_int(int *a, int *b);

int	my_tab_len(void **table);

int	xfork(void);

void	*xmalloc(size_t size);

#endif

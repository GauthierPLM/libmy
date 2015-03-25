/*
** my_str_to_wordtab.c for libmy in /home/pogam-_g/dev/C/lib/my
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Fri Jan 23 13:50:10 2015 gauthier pogam-lemontagner
** Last update Fri Jan 23 13:50:12 2015 gauthier pogam-lemontagner
*/

#include "libmy/my.h"

char	**my_str_to_wordtab(char *str)
{
  return (my_str_to_wordtab_c(str, ' '));
}

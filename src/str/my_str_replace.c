/*
** my_str_replace.c for libmy in /home/pogam-_g/dev/C/lib/my/src/str
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Tue May 12 20:23:08 2015 gauthier pogam-lemontagner
** Last update Tue May 12 20:23:09 2015 gauthier pogam-lemontagner
*/

#include <libmy/my.h>

int		count_pattern(char *str, char *pattern)
{
  int		i;
  size_t	pattern_len;

  i = 0;
  pattern_len = my_strlen(pattern);
  while (*str)
    {
      if (!my_strncmp(str, pattern, pattern_len))
	i++;
      str++;
    }
  return (i);
}

char		*replace_cpy(char *str, char *pattern, char *replace, char *new_str)
{
  int		i;
  int		j;
  size_t	pattern_len;

  i = 0;
  pattern_len = my_strlen(pattern);
  while (*str)
    {
      while (*str && my_strncmp(str, pattern, pattern_len))
	new_str[i++] = *str++;
      new_str[i] = 0;
      if (!*str)
	return (new_str);
      j = 0;
      while (replace[j])
	new_str[i++] = replace[j++];
      new_str[i] = 0;
      str += pattern_len;
    }
  return (new_str);
}

char		*malloc_replace(char *str, char *p, char *r, int nb_p)
{
  char		*new_str;
  size_t	pattern_len;
  size_t	replace_len;
  size_t	malloc_len;

  pattern_len = my_strlen(p);
  replace_len = my_strlen(r);
  malloc_len = my_strlen(str) - (nb_p * pattern_len) + (nb_p * replace_len) + 2;
  new_str = xmalloc(sizeof(char) * (malloc_len));
  return (new_str);
}

char		*my_str_replace(char *str, char *pattern, char *replace)
{
  int		nb_pattern;
  char		*new_str;

  if ((nb_pattern = count_pattern(str, pattern)) == 0)
    return (str);
  new_str = malloc_replace(str, pattern, replace, nb_pattern);
  new_str = replace_cpy(str, pattern, replace, new_str);
  return (new_str);
}

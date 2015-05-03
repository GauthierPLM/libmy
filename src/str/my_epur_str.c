/*
** my_epur_str.c for libmy in /home/pogam-_g/dev/C/lib/my/src/str
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Sun Apr  5 00:35:11 2015 gauthier pogam-lemontagner
** Last update Sun Apr  5 00:35:12 2015 gauthier pogam-lemontagner
*/

#include <libmy/my.h>

size_t		my_len_epur_str(char *str)
{
  size_t	i;

  i = 0;
  while (*str)
    {
      while (*str != ' ' && *str != '\t' && *str)
	{
	  i++;
	  str++;
	}
      while (*str == ' ' || *str == '\t')
	str++;
      if (*str)
	i++;
    }
  return (i);
}

char		*my_epur_str(char *str)
{
  char		*epur;
  size_t	i;

  if (str == NULL)
    return (NULL);
  while (*str == ' ' || *str == '\t')
    str++;
  epur = xmalloc(sizeof(char) * (my_len_epur_str(str) + 1));
  i = 0;
  while (*str)
    {
      while (*str != ' ' && *str != '\t' && *str)
	epur[i++] = *str++;
      while (*str == ' ' || *str == '\t')
	str++;
      if (*str)
	epur[i++] = ' ';
    }
  epur[i] = '\0';
  return (epur);
}

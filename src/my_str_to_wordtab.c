/*
** my_str_to_wordtab.c for libmy in /home/pogam-_g/dev/C/lib/my
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Fri Jan 23 13:50:10 2015 gauthier pogam-lemontagner
** Last update Fri Jan 23 13:50:12 2015 gauthier pogam-lemontagner
*/

int     is_alnum(char c)
{
  if (33 <= c && c <= 126)
    return (1);
  return (0);
}

char    **my_str_to_wordtab(char *str)
{
  int   t_len;
  char  **tab;
  int   i;

  if ((t_len = my_count_word(str)) == 0)
    return (NULL);
  tab = xmalloc(sizeof(char *) * (t_len + 1));
  tab[0] = str;
  i = 1;
  while (*str != 0)
    {
      if (*str == ' ' && is_alnum(*(str + 1)))
	{
	  *str = '\0';
	  tab[i] = (str + 1);
	  i++;
	}
      str++;
    }
  tab[i] = NULL;
  return (tab);
}

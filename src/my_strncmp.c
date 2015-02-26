/*
** my_strncmp.c for libmy in /home/pogam-_g/lib/my/src/
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Tue Oct  7 18:57:58 2014 gauthier pogam-lemontagner
** Last update Wed Oct  8 23:44:33 2014 gauthier pogam-lemontagner
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;

  i = 0;
  while (i < n && s1[i] != 0 && s2[i] != 0)
    {
      if (s1[i] != s2[i])
	return (s2[i] - s1[i]);
      i++;
    }
  return (*s2 - *s1);
}

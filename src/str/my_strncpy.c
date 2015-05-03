/*
** my_strncpy.c for libmy in /home/pogam-_g/lib/my/src/str
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Mon Oct  6 11:00:17 2014 gauthier pogam-lemontagner
** Last update Wed Oct  8 16:26:13 2014 gauthier pogam-lemontagner
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  while (i < n && src[i])
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}

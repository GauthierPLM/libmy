/*
** my_strcat.c for libmy in /home/pogam-_g/lib/my/src/str
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Wed Oct  8 20:34:50 2014 gauthier pogam-lemontagner
** Last update Wed Oct  8 20:53:16 2014 gauthier pogam-lemontagner
*/

char	*my_strcat(char *dest, char *src)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (dest[i] != '\0')
    i++;
  while (src[j] != '\0')
    {
      dest[i] = src[j];
      i++;
      j++;
    }
  dest[i] = '\0';
  return (dest);
}

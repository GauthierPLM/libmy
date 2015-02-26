/*
** my_strcpy.c for libmy in /home/pogam-_g/lib/my/src/
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Mon Oct  6 10:25:11 2014 gauthier pogam-lemontagner
** Last update Thu Oct 16 14:40:35 2014 gauthier pogam-lemontagner
*/

char   	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i])
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = 0;
  return (dest);
}

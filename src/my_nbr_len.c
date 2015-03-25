/*
** my_nbr_len.c for libmy in /home/pogam-_g/dev/C/lib/my/src
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Wed Mar 25 09:12:55 2015 gauthier pogam-lemontagner
** Last update Wed Mar 25 09:13:03 2015 gauthier pogam-lemontagner
*/

int	my_nbr_len(long number)
{
  int	len;

  len = 0;
  while (number > 0)
    {
      number /= 10;
      len++;
    }
  return (len);
}

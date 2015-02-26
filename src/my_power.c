/*
** my_power.c for libmy in /home/pogam-_g/lib/my/src/
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Tue Oct  7 11:04:52 2014 gauthier pogam-lemontagner
** Last update Tue Oct  7 11:04:59 2014 gauthier pogam-lemontagner
*/

long	my_power(long nb, long power)
{
  nb = (power < 0) ? 0 : nb;
  power = power - 1;
  if (power != 0 && nb != 0)
    nb = nb * my_power(nb, power);
  return (nb);
}

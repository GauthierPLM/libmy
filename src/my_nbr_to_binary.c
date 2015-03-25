/*
** to_binary.c for minitalk in /home/pogam-_g/dev/C/PSU_2014_minitalk/src/common
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Mon Mar 16 14:51:15 2015 gauthier pogam-lemontagner
** Last update Mon Mar 16 14:51:16 2015 gauthier pogam-lemontagner
*/

unsigned long	my_nbr_to_binary(int decimal)
{
  unsigned long	binary;
  unsigned long	i;
  int		rem;

  binary = 0;
  i = 1;
  while (decimal != 0)
    {
      rem = decimal % 2;
      decimal /= 2;
      binary += rem * i;
      i *= 10;
    }
  return (binary);
}

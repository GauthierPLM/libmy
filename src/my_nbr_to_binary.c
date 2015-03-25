/*
** my_nbr_to_binary.c for libmy in /home/pogam-_g/dev/C/lib/my/src
** 
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
** 
** Started on  Wed Mar 25 10:22:52 2015 gauthier pogam-lemontagner
** Last update Wed Mar 25 10:22:54 2015 gauthier pogam-lemontagner
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

/*
** my_swap_char_pointer.c for libmy in /home/pogam-_g/dev/C/lib/my/src
** 
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
** 
** Started on  Sun Nov 16 17:36:04 2014 gauthier pogam-lemontagner
** Last update Sun Nov 16 17:36:07 2014 gauthier pogam-lemontagner
*/

void	my_swap_char_pointer(char *a, char *b)
{
  char	*c;

  c = a;
  a = b;
  b = c;
  return;
}

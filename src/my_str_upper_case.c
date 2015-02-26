/*
** my_str_upper_case.c for libmy in /home/pogam-_g/lib/my/src/
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Wed Oct  8 14:45:06 2014 gauthier pogam-lemontagner
** Last update Thu Oct 16 12:07:30 2014 gauthier pogam-lemontagner
*/

char	*my_str_upper_case(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      str[i] = (char) ((97 <= str[i] && str[i] <= 122) ? str[i] - 32 : str[i]);
      i++;
    }
  return (str);
}

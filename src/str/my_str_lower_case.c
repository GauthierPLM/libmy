/*
** my_str_low_case.c for libmy in /home/pogam-_g/lib/my/src/str
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Wed Oct  8 15:03:02 2014 gauthier pogam-lemontagner
** Last update Thu Oct 16 12:08:49 2014 gauthier pogam-lemontagner
*/

char	*my_str_lower_case(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      str[i] = (char) ((65 <= str[i] && str[i] <= 90) ? str[i] + 32 : str[i]);
      i++;
    }
  return (str);
}

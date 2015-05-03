/*
** get_next_line.c for libmy in /home/pogam-_g/dev/C/lib/my/src/getters
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Tue Jan 20 23:38:50 2015 gauthier pogam-lemontagner
** Last update Tue Jan 20 23:38:52 2015 gauthier pogam-lemontagner
*/

#include <unistd.h>
#include <libmy/my.h>
#include <get_next_line.h>
#include <stdlib.h>

int	my_cat_buf_to_line(char *line, char *buf, char *save)
{
  int	i;
  int	j;

  j = 0;
  i = (int) my_strlen(line);
  while (buf[j])
    {
      if (buf[j] == '\n' || i == LINE_LEN)
	{
	  line[i] = 0;
	  if (buf[j] == '\n')
	    j++;
	  save = my_strcpy(save, buf + j);
	  return (1);
	}
      line[i++] = buf[j++];
    }
  save[0] = 0;
  line[i] = 0;
  return (0);
}

char		*get_next_line(const int fd)
{
  static char	save[BUF_LEN];
  char		buf[BUF_LEN + 1];
  char		*line;
  ssize_t	len;

  line = xmalloc(sizeof(char) * LINE_LEN);
  line[0] = 0;
  if (my_cat_buf_to_line(line, save, save) == 1)
    return (line);
  while ((len = read(fd, buf, BUF_LEN)) > 0 && LINE_LEN > 0)
    {
      buf[len] = 0;
      if (my_cat_buf_to_line(line, buf, save) == 1)
	return (line);
    }
  if (line[0] != 0)
    return (line);
  free(line);
  return (NULL);
}

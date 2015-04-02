#include <libmy/my.h>

char	*my_get_word(int word_nbr, char *str)
{
  int	i;
  int	j;
  int	k;
  int	lwork;
  char	*word;

  i = 0;
  lwork = 0;
  while (str[i] && lwork < word_nbr)
    {
      if (str[i] == ' ' || str[i] == '\t')
	lwork++;
      i++;
    }
  j = i;
  while (str[j] != ' ' && str[j] != '\t' && str[j])
    j++;
  word = xmalloc(sizeof(char) * (j - i + 1));
  word[j - i] = 0;
  k = 0;
  while (i < j)
    word[k++] = str[i++];
  return (word);
}

char		*my_get_next_word(char *str)
{
  static char	*previous_line = NULL;
  static int	word = 0;

  if (previous_line != str)
    {
      previous_line = str;
      word = 0;
      if (str == NULL)
	return (NULL);
    }
  if (my_count_word(str) <= word)
    return (NULL);
  return (my_get_word(word++, str));
}

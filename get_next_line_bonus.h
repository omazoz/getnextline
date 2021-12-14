#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# define MAX_FD 65536
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize);
char    *ft_strdup(const char *src);
size_t  ft_strlen(const char *str);
#endif

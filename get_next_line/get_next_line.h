#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>
# define SLOT 255
int     get_next_line(int fd, char **line);
int     ft_strlen(char *s);
char    *ft_strjoin(char *s, char *s2);
char    *ft_strcut(char *memory, int start, int end);
char    *ft_strdup(char *s);
#endif
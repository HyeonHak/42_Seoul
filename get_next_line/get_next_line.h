#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>
int     get_next_line(int fd, char **line);
char    *ft_strjoin(char *str, char *str2);
int     ft_strlen(char *str);
#endif
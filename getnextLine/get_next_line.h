#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
# define BUFFER_SIZE 45
# endif

#include <stdlib.h>
#include <unistd.h>

char 	*get_next_line(int fd);
char    *ft_strjoin(char *s1, char *s2);
char    *ft_one_line(char *str);
char    *ft_discard_readline(char *str);
int		ft_fnl(char *str);

#endif
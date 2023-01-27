#include "get_next_line.h"
#include <printf.h>

//newline 
int	ft_fnl(char *str)
{
	if (!str)
		return (1);
	while (*str)
	{
		if (*str == '\n')
			return (0);
		str++;
	}
	return (1);
}
//strlen
int ft_strlen(char *str, const char limit)
{
    int i;
    
    i = 0;
    while(str[i] != limit && str[i])
        i++;
    return (i);
}
//concatenate strings if there are more than one
char    *ft_strjoin(char *s1, char *s2)
{
    char    *str;
    int     i;
    int     j;

	if (!s1)
	{
		s1 = malloc(1 * sizeof(char));
		*s1 = '\0';
	}
    str = malloc(sizeof(char) * (ft_strlen(s1, '\0') + ft_strlen(s2, '\0') + 1));
    if (!str)
        return (NULL);
    i = -1;
    j = -1;
    while(s1[++i])
        str[i] = s1[i];
    while(s2[++j])
        str[i++] = s2[j];
    str[i] = '\0';
    free(s1);
    return (str);
}
//getting the line from remaining string if read only one line then...
//in case of reading multiple lines, we use this func actually.
char    *ft_one_line(char *str) 
{
    int     i;
    char    *one_line;
    int     len_of_line;

    len_of_line = ft_strlen(str, '\n');
    one_line = malloc(sizeof(char) * len_of_line + 2);
    // one line kontrol et
    i = 0;
    while (str[i] && str[i] != '\n')
    {
        one_line[i] = str[i];
        i++;
    }
    if(str[i] == '\n')
    {
        one_line[i++] = '\n';
        i++;
    }
    //i'yi sonradan artırtmayı dene
    one_line[i] = '\0';
    return(one_line);
}

//discard the line that just read (we should remove the line that just read since we want to fit our main function to use in a loop)
char    *ft_discard_readline(char *str)
{
    int     i;
    char    *discarded;
    int     size;
    int     first_line_size;

    first_line_size = ft_strlen(str, '\n');
    size = (ft_strlen(str, '\0') - ft_strlen(str, '\n'));
    // if (!*(str + first_line_size))
	// {
	// 	free(str);
	// 	return (NULL);
	// }
    discarded = malloc(sizeof(char) * (size + 1));
    // if (!discarded)
	// 	return (NULL);
    i = 0;
    first_line_size += 1;
    while (str[first_line_size + 1])
    {
        discarded[i] = str[first_line_size];
        i++;
        first_line_size++;
    }
    discarded[i] = '\0';
    free(str);
    return (discarded);
}
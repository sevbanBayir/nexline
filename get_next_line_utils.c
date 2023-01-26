#include "get_next_line.h"
//is new line ?
int ft_is_newline()
{

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
    int     len1;
    int     len2;
    int     i;
    int     j;

    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);
    str = malloc(sizeof(char) * (len1 + len2 + 1));
    if (!str)
        return (NULL);
    i = -1;
    j = -1;
    while(s1[++i])
        str[i] = s1[i];
    while(s2[++j])
        str[i++] = s2[j];
    str[i] = '\0';
    return (str);
}



//get line



//update string we should remove the line that just read
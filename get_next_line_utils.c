#include "get_next_line.h"
//is new line ?
int ft_is_newline()
{

}



//concatenate strings if there are more than one
char    *ft_strjoin(char *s1, char *s2)
{
    char    *str;//was not used for now
    int     len1;
    int     len2;
    int     i;

    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);
    str = malloc(sizeof(char) * (len1 + len2 + 1));
    if (!str)
        return (NULL);
    while(s2)
    {
        s1[len1] = s2[i];
        i++;
        len1++;
    }
    s1[len1 + len2] = '\0';
    return (s1);
}




//strlen
int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str)
        i++;
    return (i);
}



//get line



//update string
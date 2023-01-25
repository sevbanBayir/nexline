#include <stdlib.h>
#include <stdio.h>
int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}

char    *ft_strjoin(char *s1, char *s2)
{
    char    *str;//was not used for now
    int     len1;
    int     len2;
    int     i;

    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);
    printf("%d",ft_strlen(s1));
    str = malloc(sizeof(char) * (len1 + len2 + 1));
    if (!str)
        return (0);
    i = 0;
    while(s2[i])
    {
        s1[len1] = s2[i];
        i++;
        len1++;
        printf("%s","das");
    }
    s1[len1 + len2] = '\0';
    return (s1);
}

int main()
{
    char s1[] = "sevban";
    char *s2 = "bayir";

ft_strjoin(s1,s2);
    printf("%s", s1);
}
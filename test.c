#include <stdlib.h>
#include <stdio.h>

//strlen
int ft_strlen(char *str, const char limit)
{
    int i;
    
    i = 0;
    while(str[i] != limit && str[i])
        i++;
    return (i);
}

int main()
{
    char *s1 = "fvdas";
    char *s2 = "bayir\ndsda";

    printf("%d \n", ft_strlen(s2,'\0'));
}
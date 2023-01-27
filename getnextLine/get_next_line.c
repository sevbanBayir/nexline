#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

char    *ft_read(int fd, char* str)
{
    char        *temp;
    int         read_bytes;

    temp = malloc(sizeof(char) * BUFFER_SIZE + 1);
    if (!temp)
        return (NULL);
    read_bytes = 1;// 1 olması gerek ama 1 yapınca testerdan daha az geçiyor
    while(read_bytes != 0 && ft_fnl(str))
    {
        read_bytes = read(fd, temp, BUFFER_SIZE);
        //printf("read bytes : %d", read_bytes);
        if (read_bytes < 0)
        {
            free(temp);
            free(str);
            return(NULL);
        }
        *(temp + read_bytes) = '\0';
        str = ft_strjoin(str, temp);
    }
    free(temp);
    return(str);
}

char    *get_next_line(int fd)
{
    static char *store;
    char        *one_line;
    
    if (fd < 0 || BUFFER_SIZE <= 0)
    {
        free(store);//GEREK YOK
        return (NULL);
    }
    store = ft_read(fd,store);
    if (!store)
        return (NULL);
    one_line = ft_one_line(store);
    store = ft_discard_readline(store);
    return (one_line);
}

int main() {
    int fd = open("empty2.txt", O_RDONLY);
    char *line;
    line = get_next_line(fd);
    printf("%s\n", line);
    close(fd);
    return 0;
}
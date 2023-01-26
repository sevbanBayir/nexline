#include "get_next_line.h"

char    *get_next_line(int fd)
{
    char    *temp;
    int     read_bytes;
    static char *store;

    temp = malloc(sizeof(char) * (BUFFER_SIZE + 1));
    if (!temp)
        return (NULL);
    while (store != '\n' && read_bytes != 0)
    {
        read_bytes = read(fd, temp, BUFFER_SIZE);
        if (read_bytes <= 0)
        {
            free(temp);
            free(store);
            return (NULL);
        }
        *(temp + read_bytes) = '\0';
        //append string (strjoin)
        store = ft_strjoin(temp, store);
    }
    free(temp);
    return (store);
}
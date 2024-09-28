#include <unistd.h>
#include <stdlib.h>

void *ft_memchr(const void *ptr, int value, int num)
{
    while(num--)
    {
        if(*ptr == value)
            return ptr;
        ptr++;
    }
    return NULL;
}
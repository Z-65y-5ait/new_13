#include <string.h>
#include <unistd.h>
#include <stdlib.h>

void *ft_memccpy(void *dest, const void *src, int c, int n)
{
    while(n--)
    {
       *dest = *src;
       if (*src == c)
            return (dest + 1);
       dest++;
       src++;
    }
    dest = '\0';
    return (NULL);
}
#include <string.h>
#include <unistd.h>

void *ft_memcpy(void *dest, const void *src, int n)
{
    while(n--)
       *dest++ = *src++;
    dest = '\0';
    return dest;
}
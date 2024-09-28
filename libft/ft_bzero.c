#include <string.h>
#include <unistd.h>

void ft_bzero(void *s, int len)
{
    unsigned char str;

    *str = s;
    while(len--)
    {
       *str = 0;
        str++;
    }
    return s; 
}
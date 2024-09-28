#include <string.h>
#include <unistd.h>

void *ft_memset(void *str, int x, int n)
{
    unsigned char *ptr;
    
    *ptr = str;
    while(n--)
    {
       *ptr = x;
       ptr++;
    }
    return str; 
}
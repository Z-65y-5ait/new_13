#include <string.h>
#include <stdlib.h>

int ft_memcmp(const void *ptr1, const void *ptr2, int num)
{
    while(num--)
    {
        if(*ptr1 != *ptr2)
            return (*ptr1 - *ptr2);
        ptr1++;
        ptr2++;
    }
    return (0);
}
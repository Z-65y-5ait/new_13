#include <string.h>

int ft_strlen(char *str)
{
    int i;
    
    i = 0;
    while(str[i] != '\0')
        i++;
    return (i);
}

char *ft_strncat(char *dest, const char *src, int n)
{
    int i;
    int len;

    i = 0;
    len = ft_strlen(dest);
    while(src[i] != '\0' && i < n)
        dest[len++] = src[i++];
    while(i < n)
        dest[len] = '\0';
    return dest;
}
#include <string.h>

int ft_strlen(char *str)
{
    int i;
    
    i = 0;
    while(str[i] != '\0')
        i++;
    return (i);
}

char *ft_strcat(char *dest, const char *src)
{
    int i;
    int len;

    i = 0;
    len = ft_strlen(dest);
    while(src[i] != '\0')
    {
        dest[len++] = src[i++]; 
    }
    dest[len] = '\0';
    return dest;
}
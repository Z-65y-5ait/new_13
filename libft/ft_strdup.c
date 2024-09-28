#include <stdlib.h>
#include <string.h>

int ft_strlen(const char *str)
{
    int i;
    
    i = 0;
    while(str[i] != '\0')
        i++;
    return (i);
}

char    *ft_strdup(const char *s)
{
    char *str;
    char *dup;
    int len;

    len = ft_strlen(s);
    dup = (char *)malloc(len + 1);
    if(!dup)
        return (NULL);
    str = dup;
    while(*s != '\0')
    {
        *str = *s;
        s++;
        str++;
    }
    *str = '\0';
    return (dup);
}
char *ft_strchr(const char *s, int c)
{
    char h;

    h = (char)c;
    while(*s != '\0')
    {
        if(s == h)
            return ((char *)s);
        s++;
    }
    if(h == '\0')
    {
        return ((char *)s);
    }
    return (NULL);
}
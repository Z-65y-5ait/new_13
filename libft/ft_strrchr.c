char *ft_strrchr(const char *s, int c)
{
    char h;
    char last;

    h = (char)c;
    last = NULL;
    while(*s != '\0')
    {
        if(s == h)
            last = s;
        s++;
    }
    if(h == '\0')
    {
        return ((char *)s);
    }
    return (char *)last;
}
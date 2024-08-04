#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    const char *h;
    const char *n;

    while (*haystack != '\0' && len > 0)
    {
        h = haystack;
        n = needle;
        i = 0;
        while (*h == *n && i < len && *n != '\0')
        {
            h++;
            n++;
            i++;
        }
        if (*n == '\0')
            return (char *)(haystack);
        haystack++;
        len--;
    }
    return NULL;
}

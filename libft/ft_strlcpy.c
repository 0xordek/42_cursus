#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t destsize)
{
    size_t i;
    size_t s_len;

    i = 0;
    s_len = ft_strlen(src);
    if (destsize == 0)
        return (s_len);
    while (src[i] && i < destsize - 1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (s_len);
}

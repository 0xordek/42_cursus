#include "libft.h"

char *ft_strdup(const char *s1)
{
    int i;
    int len;
    char *dest;

    i = 0;
    len = ft_strlen(s1);
    dest = (char *)malloc(len * sizeof(char));
    while (s1[i])
    {
        dest[i] = s1[i];
        i++;
    }
    dest[i] = '\0';

    return (dest);
}

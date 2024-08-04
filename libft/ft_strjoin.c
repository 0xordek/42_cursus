#include "libft.h"

char *ft_strjoin(const char *s1, const char *s2)
{
    int i;
    int j;
    char *dest;

    j = 0;
    i = 0;
    dest = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) - 1) * sizeof(char));
    while (s1[i])
    {
        dest[i] = s1[i];
        i++;
    }
    while (s2[j])
    {
        dest[i++] = s2[j++];
    }
    dest[i] = '\0';
    return (dest);
}

#include "libft.h"

static void    ft_itoa_helper(char *dest, int *i, int n)
{
    if (n == -2147483648)
    {
        ft_strlcpy(dest, "-2147483648", 12);
    }
    else if (n < 0)
    {
        dest[0] = '-';
        (*i)++;
        ft_itoa_helper(dest, i, -n);
    }
    else if (n > 9)
    {
        ft_itoa_helper(dest, i, n / 10);
        ft_itoa_helper(dest, i, n % 10);
    }
    else
    {
        dest[*i] = n + '0';
        (*i)++;
    }
}

char    *ft_itoa(int n)
{
    char *dest;
    int i;

    i = 0;
    dest = (char *)malloc(sizeof(char) * 11);
    ft_itoa_helper(dest, &i, n);
    return (dest);
}

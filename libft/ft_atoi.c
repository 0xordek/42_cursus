#include <limits.h>

int ft_atoi(const char *str)
{
    int     i;
    int     sign;
    long    result;

    i = 0;
    sign = 1;
    result = 0;
    while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        if (result > (LONG_MAX - (str[i] - '0')) / 10)
            return (sign == 1 ? INT_MAX : INT_MIN);
        result = (result * 10) + (str[i] - 48);
        i++;
    }
    return (int)(result * sign);
}

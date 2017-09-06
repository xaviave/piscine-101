int ft_atoi(char *str)
{
    int i;
    char n;
    int out;

    i = 0;
    out = 0;
    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        n = str[i];
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        out = out * 10 + str[i] - '0';
        i++;
    }
    if (n == '-')
        out = -out;
    return (out);
}

#include <stdio.h>

int main(int ac, char *ag[])
{
        printf("%d\n%d", ft_atoi(ag[1]), atoi(ag[1]));
}

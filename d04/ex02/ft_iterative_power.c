int ft_iterative_power(int nb, int power)
{
    int i;
    
    i = 1;
    if (nb == 0 || power < 0)
        return (0);
    if (power == 0)
        return (1);
    if (power == 1)
        return (nb);
    while (i < power)
    {
        nb = nb * power;
        i++;
    }
    return (nb);
}

int main()
{
    printf("%d", ft_iterative_power(5, 5));
}

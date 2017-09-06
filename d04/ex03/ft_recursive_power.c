int ft_recursive_power(int nb, int power)
{
    int res;

    res = nb;
    if (power == 1)
        return (nb);
    if (power == 0)
        return (1);
    if (power < 0 || nb == 0)
        return (0);
    else
        nb = res * ft_recursive_power(nb, (power - 1));
    return (nb * res);
}

int main()
{
    printf("%d", ft_recursive_power(5, 5));
}

int ft_recursive_factorial(int nb)
{
    int mem;

    mem = 0;
    if (nb < 0 || nb > 13)
        return (0);
    if (nb == 0)
        return (1);
    else
        mem = ft_recursive_factorial(nb - 1);
    return (mem * nb);
}

int main()
{
    printf("%d", ft_recursive_factorial(5));
}

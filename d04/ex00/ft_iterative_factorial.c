int ft_iterative_factorial(int nb)
{
    int i;
    int mem;

    i = 1;
    mem = nb;
    if (nb < 0 || nb > 13)
        return (0);
    if (nb == 0 || nb == 1)
        return (1);
    while (i < (nb - 1))
    {
        mem = mem * (nb - i);
        i++;
    }
    return (mem);
}

int main()
{
    printf("%d", ft_iterative_factorial(5));
}

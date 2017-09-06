#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_is_negative(int n)
{
    if (n < 0)
        ft_putchar('N');
    else
        ft_putchar('P');
}

int main()
{
    ft_is_negative(12);      
    ft_is_negative(-540);      
    ft_is_negative(0);      
    ft_is_negative(45);      
    ft_is_negative(-454548);      
}

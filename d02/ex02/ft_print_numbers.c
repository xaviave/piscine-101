#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_numbers(void)
{
    char a;

    a = 48;
    while(a < 58)
        ft_putchar(a++);
}

int main()
{
    ft_print_numbers();
}

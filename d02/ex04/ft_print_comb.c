#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_comb(void)
{
    char a;
    char b;
    char c;

    a = 0;
    while (a <= 7)
    {
        b = a + 1;
        while (b <= 8)
        {
            c = b + 1;
            while (c <= 9)
            {
                ft_putchar(a + 48);
                ft_putchar(b + 48);
                ft_putchar(c + 48);
                if (!(a == 7 && b == 8 && c == 9))
                {
                    ft_putchar(',');
                    ft_putchar(' ');
                }
            c++;
            }
        b++;
        }
    a++;
    }
}

int main()
{
    ft_print_comb();
}

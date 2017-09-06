#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_comb2(void)
{
    char array[4];

    array[0] = 0;
    array[1] = 0;
    array[2] = 0;
    array[3] = 1;
    while (!((array[0] == 9) && (array[1] == 9)))
    {
        ft_putchar(array[0] + 48);
        ft_putchar(array[1] + 48);
        ft_putchar(' ');
        ft_putchar(array[2] + 48);
        ft_putchar(array[3] + 48);
        if (!((array[0] == 9) && (array[1] == 8)))
        {
            ft_putchar(',');
            ft_putchar(' ');
        }
        array[3]++;
        if ((array[3] = array[3] % 10) == 0)
            array[2] = (array[2] + 1);
        if (array[2] == 10)
        {
            array[2] = array[0];
            array[1]++;
            if ((array[1] = array[1] % 10) == 0)
                array[0]++;
            array[3] = array[1] + 1;
        }
    }
}

int main()
{
    ft_print_comb2();
    return 0;
}

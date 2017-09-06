void ft_sort_integer_table(int *tab, int size)
{
    int a;
    int i;

    i = 0;
    if (i < size)
    {
        if (tab[i + 1] > tab[i])
        {
            a = tab[i + 1];
            tab[i + 1] = tab[i];
            tab[i] = a;
            i = 0;
        }
        else
            i++;
    }
}

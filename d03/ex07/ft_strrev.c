char *ft_strrev(char *str)
{
    int i;
    int a;
    int c;

    i = 0;
    a = 0;
    while (str[i])
        i++;
    i -= 1;
    while (i > a)
    {
        c = str[i];
        str[i] = str[a];
        str[a] = c;
        i--;
        a++;
    }
    return (str);
}

int main(int ac, char *ag[])
{
    printf("%s", ft_strrev(ag[1]));
}

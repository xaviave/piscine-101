nclude <unistd.h>

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

int  ft_taille(int i)
{
	if(i == 0)
		return(7);
	return(ft_taille(i - 1) + 2 * (1 + (3 + i) + ((i % 2) + (i / 2))));
}

void etage(int x, int y, int espace)
{
	int i;
	int j;

	i = 0;
	while(i < x)
	{
		j = -espace;
		while(j < x - 1 - i)
		{
			ft_putchar(' ');
			j++;
		}
		ft_putchar('/');
		while(j < y - (x + 1 - i))
		{
			ft_putchar('*');
			j++;
		}
		ft_putchar('\\');
		ft_putchar('\n');
		i++;
	}
}

void sastantua(int a)
{
	int i;
	int x;
	int y;
	int espace;
	int z;

	i = 0;
	z = ft_taille(a - 1);
	while(i < a)
	{
		x = 3 + i;
		y = ft_taille(i);
		espace = (z - largeur) / 2;
		etage(x, y, espace);
		i++;
	}
}

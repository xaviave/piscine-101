/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 08:25:59 by xamartin          #+#    #+#             */
/*   Updated: 2017/09/09 08:08:31 by xamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void my_declaration(char *a)
{
	a[0] = 0;
	a[1] = 0;
	a[2] = 0;
	a[3] = 1;
}

void ft_perso(char *a)
{
	ft_putchar(a[0] + 48);
	ft_putchar(a[1] + 48);
	ft_putchar(' ');
	ft_putchar(a[2] + 48);
	ft_putchar(a[3] + 48);
}

void ft_print_comb2(void)
{
	char tab[4];

	my_declaration(tab);
	while (!((tab[0] == 9) && (tab[1] == 9)))
	{
		ft_perso(tab);
		if (!((tab[0] == 9) && (tab[1] == 8)))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		tab[3]++;
		if ((tab[3] = tab[3] % 10) == 0)
			tab[2] = (tab[2] + 1);
		if (tab[2] == 10)
		{
			tab[2] = tab[0];
			tab[1]++;
			if ((tab[1] = tab[1] % 10) == 0)
			{
				tab[0]++;
			}
			tab[3] = tab[1] + 1;
		}
	}
}

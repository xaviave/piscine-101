/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 09:52:06 by xamartin          #+#    #+#             */
/*   Updated: 2017/09/10 12:21:42 by xamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(char c, int x, int y)
{
	int i;

	i = 0;
	while (i++ < (x - 2))
		ft_putchar(c);
}

void	ft_ligne2(int x, int y)
{
	if (y > 1)
	{
		ft_putchar('A');
		if (x > 1)
		{
			ft_print('B', x, y);
			ft_putchar('C');
		}
		ft_putchar('\n');
	}
}

void	ft_aff(int x, int y)
{
	int j;

	j = 0;
	ft_putchar('A');
	if (x > 1)
	{
		ft_print('B', x, y);
		ft_putchar('C');
	}
	ft_putchar('\n');
	if (y > 1)
	{
		while ((y - 2) > j)
		{
			ft_putchar('B');
			if (x > 1)
			{
				ft_print(' ', x, y);
				ft_putchar('B');
			}
			ft_putchar('\n');
			j++;
		}
	}
	ft_ligne2(x, y);
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		if (y == 1 && x == 1)
			ft_putchar('A');
		ft_aff(x, y);
	}
}

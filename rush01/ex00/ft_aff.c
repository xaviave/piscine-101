/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aff.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/17 21:28:40 by xamartin          #+#    #+#             */
/*   Updated: 2017/09/19 21:51:33 by xamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		affichage(int **sudoku)
{
	int		y;
	int		x;

	y = 0;
	x = 0;
	while (x < 9)
	{
		y = 0;
		while (y < 9)
		{
			ft_putchar(sudoku[x][y] + 48);
			if (y < 8)
				ft_putchar(' ');
			y++;
		}
		ft_putchar('\n');
		x++;
	}
}

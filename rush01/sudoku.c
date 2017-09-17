/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/17 19:54:04 by xamartin          #+#    #+#             */
/*   Updated: 2017/09/17 20:45:46 by xamartin         ###   ########.fr       */
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

t_bool		check(int **sudoku, int x, int y, int k)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		if (sudoku[i][y] == k || sudoku[x][i] == k)
			return (FALSE);
		i++;
	}
	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			if (sudoku[(x - (x % 3)) + i][(y - (y % 3)) + j] == k)
				return (FALSE);
			j++;
		}
		i++;
	}
	return (TRUE);
}

t_bool		valide(int **sudoku, int p)
{
	int		x;
	int		y;
	int		k;

	x = p / 9;
	y = p % 9;
	k = 1;
	if (p == 81)
		return (TRUE);
	if (sudoku[x][y] != 0)
		return (valide(sudoku, (p + 1)));
	while (k <= 9)
	{
		if (check(sudoku, x, y, k))
		{
			sudoku[x][y] = k;
			if (valide(sudoku, (p + 1)))
				return (TRUE);
			else
				sudoku[x][y] = 0;
		}
		k++;
	}
	return (FALSE);
}

int			*ft_strdup(char *src)
{
	int		i;
	int		*tab;

	i = 0;
	while (src[i] != '\0')
		i++;
	if (!(tab = (int *)malloc(sizeof(tab) * i)))
		return (NULL);
	i = 0;
	while (src[i] != 0)
	{
		if (src[i] == '.')
			src[i] = '0';
		tab[i] = (int)src[i] - 48;
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

int			main(int ac, char *av[])
{
	int		p;
	int		i;
	int		j;
	int		**sudoku;

	p = 0;
	i = 0;
	j = 1;
	while ()
	if (!(sudoku = (int **)malloc(sizeof(int *) * 9)))
		return (0);
	while (i < 9)
	{
		sudoku[i] = ft_strdup(av[j]);
		i++;
		j++;
	}
	if (ac != 9)
	{
		valide(sudoku, p);
		affichage(sudoku);
	}
	free(sudoku);
	return (0);
}

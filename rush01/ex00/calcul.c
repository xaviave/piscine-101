/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calcul.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 17:37:11 by xamartin          #+#    #+#             */
/*   Updated: 2017/09/18 21:23:26 by xamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int			meme(int **test, int **sudoku)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (test[i][j] == sudoku[i][j])
				k++;
			j++;
		}
		i++;
	}
	return (k);
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

t_bool		valide2(int **test, int p)
{
	int		x;
	int		y;
	int		k;

	x = p / 9;
	y = p % 9;
	k = 9;
	if (p == 81)
		return (TRUE);
	if (test[x][y] != 0)
		return (valide2(test, (p + 1)));
	while (k >= 1)
	{
		if (check(test, x, y, k))
		{
			test[x][y] = k;
			if (valide2(test, (p + 1)))
				return (TRUE);
			else
				test[x][y] = 0;
		}
		k--;
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/17 21:32:03 by xamartin          #+#    #+#             */
/*   Updated: 2017/09/18 14:42:08 by xamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int			possible(char *av[])
{
	int		x;
	int		y;

	y = 1;
	while(y != 10)
	{
		x = 0;
		while(x != 9)
		{
			if((av[y][x] < '0' || av[y][x] > '9') && (av[y][x] != '.'))
			{
				write(1, "Error\n", 6);
				return (1);
			}
		x++;
		}
		y++;
	}
	return(0);
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
	if (ac != 10)
	{
		write(1, "Error\n", 6);
		return(0);
	}
	if (possible(av) == 1)
		return(0);
	if (!(sudoku = (int **)malloc(sizeof(int *) * 9)))
		return (0);
	while (i < 9)
	{
		sudoku[i] = ft_strdup(av[j]);
		i++;
		j++;
	}
	valide(sudoku, p);
	affichage(sudoku);
	free(sudoku);
	return (0);
}

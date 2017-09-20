/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/17 21:32:03 by xamartin          #+#    #+#             */
/*   Updated: 2017/09/18 21:35:49 by xamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

t_bool		socoman(int ac)
{
	if (ac != 10)
	{
		write(1, "Error\n", 6);
		return (FALSE);
	}
	return (TRUE);
}

t_bool		pepe(int **test, int **sudoku)
{
	if (meme(test, sudoku) != 81)
	{
		write(1, "Error\n", 6);
		return (FALSE);
	}
	return (TRUE);
}

t_bool		ah(int **test, int **sudoku)
{
	valide2(test, 0);
	valide(sudoku, 0);
	if (pepe(test, sudoku) == 0)
		return (FALSE);
	affichage(sudoku);
	free(sudoku);
	free(test);
	return (TRUE);
}

int			main(int ac, char *av[])
{
	int		i;
	int		j;
	int		**sudoku;
	int		**test;

	i = 0;
	j = 1;
	if (socoman(ac) == 0)
		return (0);
	if (!(sudoku = (int **)malloc(sizeof(int *) * 9)))
		return (0);
	if (!(test = (int **)malloc(sizeof(int *) * 9)))
		return (0);
	while (i < 9)
		test[i++] = ft_strdup(av[j++]);
	i = 0;
	j = 1;
	while (i < 9)
		sudoku[i++] = ft_strdup(av[j++]);
	ah(test, sudoku);
	return (0);
}

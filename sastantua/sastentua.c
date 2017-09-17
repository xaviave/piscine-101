/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastentua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 20:45:59 by xamartin          #+#    #+#             */
/*   Updated: 2017/09/10 22:03:00 by xamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int  largeurEtage_i(int i)
{
	if(i == 0)
		return(7);
	return(largeurEtage_i(i - 1) + 2 * (1 + (3 + i) + ((i % 2) + (i / 2))));
}

void etage(int hauteur, int largeur, int decallage)
{
	int i;
	int j;

	i = 0;
	while(i < hauteur)
	{
		j = -espace;
		while(j < hauteur - 1 - i)
		{
			ft_putchar(' ');
			j++;
		}
		ft_putchar('/');
		while(j < largeur - (hauteur + 1 - i))
		{
			ft_putchar('*');
			j++;
		}
		ft_putchar('\\');
		ft_putchar('\n');
		i++;
	}
}

void sastantua(int size)
{
	int i;
	int hauteur;
	int largeur;
	int decallage;
	int largeurTotale;

	i = 0;
	largeurTotale = largeurEtage_i(size - 1);
	while(i < size)
	{
		hauteur = 3 + i;
		largeur = largeurEtage_i(i);
		decallage = (largeurTotale - largeur) / 2;
		etage(hauteur, largeur, decallage);
		i++;
	}
}

int  main(int argc, char **argv)
{
	sastantua(2);
	return 0;
}


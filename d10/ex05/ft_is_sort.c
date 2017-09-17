/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 21:15:14 by xamartin          #+#    #+#             */
/*   Updated: 2017/09/16 20:26:23 by xamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;
	int		up;
	int		down;
	int		j;

	j = 0;
	i = 0;
	up = 0;
	down = 0;
	if (!(tab[i + 1]))
		return (1);
	while (i < length)
	{
		if (tab[i] && tab[i + 1] && (f)(tab[i], tab[i + 1]) < 0)
			down = 1;
		else if (tab[i] && tab[i + 1] && (f)(tab[i], tab[i + 1]) > 0)
			up = 1;
		else if (tab[i] && tab[i + 1] && (f)(tab[i], tab[i + 1]) == 0)
			j++;
		i++;
	}
	if ((down == 1 && up == 0) || (down == 0 && up == 1) || j == length)
		return (1);
	return (0);
}

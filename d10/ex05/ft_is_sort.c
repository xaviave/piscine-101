/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 21:15:14 by xamartin          #+#    #+#             */
/*   Updated: 2017/09/19 17:33:02 by xamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) <= 0)
			i++;
		else
			j = 1;
		if (j == 1)
			i = length;
	}
	if (j == 0)
		return (1);
	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) >= 0)
			i++;
		else
			return (0);
	}
	return (1);
}

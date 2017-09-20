/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 15:18:51 by xamartin          #+#    #+#             */
/*   Updated: 2017/09/20 17:01:30 by xamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int	a;
	int	i;

	i = 0;
	a = 0;
	while (i <= size)
	{
		if (tab[i + 1] < tab[i])
		{
			a = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = a;
			i = 0;
		}
		i++;
	}
}	

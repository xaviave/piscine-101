/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 15:14:00 by xamartin          #+#    #+#             */
/*   Updated: 2017/09/18 16:57:42 by xamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*tab1;

	i = 0;
	if (!(tab1 = (int *)malloc(sizeof(int) * length)))
		return (NULL);
	while (i < length)
	{
		tab1[i] = (f)(tab[i]);
		i++;
	}
	return (tab1);
}

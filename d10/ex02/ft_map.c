/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 15:14:00 by xamartin          #+#    #+#             */
/*   Updated: 2017/09/16 20:19:13 by xamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			*ft_map(int *tab, int lenght, int (*f)(int))
{
	int		i;
	int		*tab1;

	i = 0;
	if (!(tab1 = (int *)malloc(sizeof(int) * lenght)))
		return (NULL);
	while (i < lenght)
	{
		tab1[i] = f(tab[i]);
		i++;
	}
	return (tab1);
}

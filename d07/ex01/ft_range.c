/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 08:40:33 by xamartin          #+#    #+#             */
/*   Updated: 2017/09/09 11:02:39 by xamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int i;

	i = 0;
	if (min >= max)
		return (NULL);
	if (!(tab = (int *)malloc(sizeof(tab) * (max - min + 1))))
		return (NULL);
	while (tab[i] != '\0')
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}

int main(int ac, char *ag[])
{
	int *tab;
	int i = 0;

	tab = ft_range(1, 4);
	while (i < 4)
	{
		printf("%d", tab[i]);
		printf("\n");
		i++;
	}
}

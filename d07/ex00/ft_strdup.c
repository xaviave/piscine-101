/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 08:26:44 by xamartin          #+#    #+#             */
/*   Updated: 2017/09/09 08:40:14 by xamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strdup(char *src)
{
	int		i;
	char	*tab;

	i = 0;
	while (src[i] != '\0')
		i++;
	if (!(tab = (char *)malloc(sizeof(tab) * i)))
		return (NULL);
	i = 0;
	while (src[i] != 0)
	{
		tab[i] = src[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

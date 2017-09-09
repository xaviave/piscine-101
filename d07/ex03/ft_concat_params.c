/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 11:12:27 by xamartin          #+#    #+#             */
/*   Updated: 2017/09/09 13:19:11 by xamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int  i;
	int  j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
} 

char *ft_concat_params(int argc, char **argv)
{
	int i;
	char *tab;

	i = 1;
	if (!(tab = (char *)malloc(sizeof(tab) * (argc - 1))))
		return (NULL);
	while (i < argc)
	{
		ft_strcat(tab, argv[i]);
		if (i < argc - 1)
			ft_strcat(tab, "\n");
		i++;
	}
	return (tab);
}

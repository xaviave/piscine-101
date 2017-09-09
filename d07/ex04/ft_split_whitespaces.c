/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 13:19:40 by xamartin          #+#    #+#             */
/*   Updated: 2017/09/09 16:56:16 by xamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_count_worlds(char *str)
{
	int		i;

	i = 0;
	while (*str && (*str == '\n' && *str == '\t' && *str == ' '))
	{
		str++;
		if (*str && *str != '\n' && *str != '\t' && *str != ' ')
		{
			i++;
			while (*str && *str != '\n' && *str != '\t' && *str != ' ')
				str++;
		}
	}
	return (i);
}

char		*ft_strdup(char *src)
{
	int		len;
	int		i;
	char *	word;

	len = 0;
	while (src[len] && src[len] != '\t' && src[len] != ' ' && src[len] != '\n')
		len++;
	if (!(word = (char *)malloc((sizeof(char *) * (len + 1)))))
		return (NULL);
	i = -1;
	while (++i < len)
		word[i] = src[i];
	word[i] = 0;
	return (word);
}
char		**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	char	**res;

	i = ft_count_worlds(str);
	j = 0;
	if (!(res = (char *)malloc(sizeof(char *) * (i + 1))))
		return (NULL);
	while (*str)
	{
		while (*str && (*str == '\n' || *str == '\t' || *str == ' '))
			str++;
		if (*str && *str != '\n' && *str != '\t' && *str != ' ')
			res[j++] = ft_strdup(str);
		while (*str && *str != '\n' && *str != '\t' && *str != ' ')
			str++;
	}
	res[i] = 0;
	return (res);
}

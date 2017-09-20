/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 11:13:37 by xamartin          #+#    #+#             */
/*   Updated: 2017/09/20 19:05:30 by xamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s1[i] != '\0')
		return (s1[i]);
	if (s2[i] != '\0')
		return (-s2[i]);
	return (0);
}

void		ft_sort_wordtab(char **tab)
{
	int		i;
	int		size;
	char	*a;

	i = 0;
	size = 0;
	while (tab[size++])
	{
		while (i < size - 1)
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				a = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = a;
				i = 0;
			}
			else
				i++;
		}
	}
}

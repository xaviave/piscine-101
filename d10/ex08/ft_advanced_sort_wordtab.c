/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 11:55:57 by xamartin          #+#    #+#             */
/*   Updated: 2017/09/18 17:07:08 by xamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	char	*a;

	i = 0;
	while (tab[i + 1] != 0)
	{
		if (cmp(tab[i], tab[i + 1]) > 0)
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

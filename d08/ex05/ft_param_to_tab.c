/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 21:40:11 by xamartin          #+#    #+#             */
/*   Updated: 2017/09/19 19:04:04 by xamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int					ft_strlen(char *str)
{
	int				i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdupi(char *str)
{
	int				i;
	char			*tab;

	i = ft_strlen(str);
	if (!(tab = (char *)malloc(sizeof(char *) * (i + 1))))
		return (NULL);
	i = 0;
	while (str[i])
	{
		tab[i] = str[i];
		i++;
	}
	return (tab);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int				i;
	int				j;
	t_stock_par		*s_tab;

	i = 0;
	if (!(s_tab = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1))))
		return (NULL);
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
			j++;
		s_tab[i].size_param = j;
		s_tab[i].str = av[i];
		s_tab[i].copy = ft_strdupi(av[i]);
		s_tab[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	s_tab[i].str = 0;
	return (s_tab);
}

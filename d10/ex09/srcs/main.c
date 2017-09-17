/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 22:25:35 by xamartin          #+#    #+#             */
/*   Updated: 2017/09/16 15:35:15 by xamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"
#include "ft_opp.h"

int		main(int ac, char *av[])
{
	int i;

	i = 0;
	if (ac == 4)
	{
		while (ft_strcmp(av[2], g_opptab[i].str) != 0 && i < 5)
			i++;
		if ((i == 3 || i == 4) && ft_atoi(av[3]) == 0)
		{
			zero(i);
			return (0);
		}
		else if (i == 5)
		{
			ft_usage(0, 0);
			return (0);
		}
		ft_putnbr((g_opptab[i].f(ft_atoi(av[1]), ft_atoi(av[3]))));
		ft_putchar('\n');
	}
	return (0);
}

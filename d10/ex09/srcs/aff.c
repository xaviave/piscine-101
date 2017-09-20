/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 13:06:49 by xamartin          #+#    #+#             */
/*   Updated: 2017/09/19 17:06:14 by xamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

int			ft_atoi(char *str)
{
	int		i;
	int		n;
	int		out;

	out = 0;
	i = 0;
	while (str[i] != '\0' && (str[i] == 32 || (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
	{
		n = str[i];
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		out = out * 10 + str[i] - '0';
		i++;
	}
	if (n == '-')
		out = -out;
	return (out);
}

void		ft_putnbr(int nb)
{
	long n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + 48);
}

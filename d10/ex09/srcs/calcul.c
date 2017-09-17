/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calcul.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 21:44:24 by xamartin          #+#    #+#             */
/*   Updated: 2017/09/15 23:08:23 by xamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		ft_add(long a, long b)
{
	return ((int)(a + b));
}

int		ft_sub(long a, long b)
{
	return ((int)(a - b));
}

int		ft_mul(long a, long b)
{
	return ((int)(a * b));
}

int		ft_div(long a, long b)
{
	return ((int)(a / b));
}

int		ft_mod(long a, long b)
{
	return ((int)(a % b));
}

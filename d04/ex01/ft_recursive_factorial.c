/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 15:43:37 by xamartin          #+#    #+#             */
/*   Updated: 2017/09/08 15:59:40 by xamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int mem;

	mem = 0;
	if (nb < 0 || nb > 13)
		return (0);
	if (nb == 0)
		return (1);
	else
		mem = ft_recursive_factorial(nb - 1);
	return (mem * nb);
}

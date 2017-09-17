/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 15:44:39 by xamartin          #+#    #+#             */
/*   Updated: 2017/09/11 14:19:49 by xamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int res;

	i = 1;
	res = nb;
	if (power == 0)
		return (1);
	if (nb == 0 || power < 0)
		return (0);
	if (power == 1)
		return (nb);
	while (i < power)
	{
		nb = nb * res;
		i++;
	}
	return (nb);
}

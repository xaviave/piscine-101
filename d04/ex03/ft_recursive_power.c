/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 15:51:41 by xamartin          #+#    #+#             */
/*   Updated: 2017/09/11 14:21:47 by xamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power == 0)
		return (1);
	if (power < 0 || nb == 0)
		return (0);
	if (power == 1)
		return (nb);
	if (power > 1)
		nb = res * ft_recursive_power(nb, (power - 1));
	else
		return (1);
	return (nb);
}

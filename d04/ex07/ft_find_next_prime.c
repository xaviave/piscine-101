/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 15:56:33 by xamartin          #+#    #+#             */
/*   Updated: 2017/09/08 15:57:21 by xamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	i = 0;
	if (nb <= 1)
		return (0);
	while (nb % i != 0)
	{
		if (i > nb)
			break ;
		i++;
	}
	if (i == nb)
		return (1);
	return (0);
}
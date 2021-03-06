/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 15:17:21 by xamartin          #+#    #+#             */
/*   Updated: 2017/09/15 08:43:00 by xamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_atoi(char *str)
{
	int		i;
	char	n;
	int		out;

	i = 0;
	out = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
		n = str[i++];
	while (str[i] >= '0' && str[i] <= '9')
		out = out * 10 + str[i++] - '0';
	if (n == '-')
		out = -out;
	return (out);
}

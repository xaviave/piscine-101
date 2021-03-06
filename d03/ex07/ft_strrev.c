/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 15:16:16 by xamartin          #+#    #+#             */
/*   Updated: 2017/09/08 15:21:19 by xamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int i;
	int a;
	int c;

	i = 0;
	a = 0;
	while (str[i])
		i++;
	i -= 1;
	while (i > a)
	{
		c = str[i];
		str[i] = str[a];
		str[a] = c;
		i--;
		a++;
	}
	return (str);
}

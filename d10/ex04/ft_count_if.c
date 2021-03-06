/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 21:11:38 by xamartin          #+#    #+#             */
/*   Updated: 2017/09/16 15:32:50 by xamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char *))
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (tab[i] != 0)
	{
		if ((*f)(tab[i]) == 1)
			j++;
		i++;
	}
	return (j);
}

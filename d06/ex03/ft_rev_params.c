/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 18:10:29 by xamartin          #+#    #+#             */
/*   Updated: 2017/09/08 18:48:59 by xamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_rev(char *str)
{
	int	i;
	int a;
	int b;

	a = 0;
	b = 0;
	while (str[a] != '\0')
		a++;
	a -= 1;
	while (a > b)
	{
		i = str[a];
		str[a] = str[b];
		str[b] = i;
		a--;
		b++;
	}
	return (str);
}

void	ft_aff(char *str)
{
	int	i;

	i = 0;
	ft_rev(str);
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int ac, char *ag[])
{
	int i;

	i = 0;
	while (i < ac)
	{
		ft_aff(ag[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}

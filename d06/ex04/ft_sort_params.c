/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 19:42:39 by xamartin          #+#    #+#             */
/*   Updated: 2017/09/08 22:54:57 by xamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

char	ft_strcmp(char *str1, char *str2)
{
	int i;

	i = 0;
	while (*str1 != '\0' && *str2 != '\0')
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	if (str1 != '\0')
		return (str1[i]);
	if (str2 != '\0')
		return (-str2[i]);
	return (0);
}

void	my_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

void	ft_swap(char **a, char **b)
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}

int		main(int ac, char *ag[])
{
	int		i;

	i = 1;
	while (i < ac - 1)
	{
		if (ft_strcmp(ag[i], ag[i + 1]) > 0)
		{
			ft_swap(&ag[i], &ag[i + 1]);
			i = 1;
		}
		else
			i++;
	}
	i = 1;
	while (ag[i] != '\0')
	{	
		my_putstr(ag[i]);
		i++;
	}
}

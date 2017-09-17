/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 18:10:29 by xamartin          #+#    #+#             */
/*   Updated: 2017/09/14 14:35:50 by xamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_aff(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar(str[i++]);
}

int		main(int ac, char *ag[])
{
	int i;

	i = ac - 1;
	while (i > 0)
	{
		ft_aff(ag[i]);
		ft_putchar('\n');
		i--;
	}
	return (0);
}

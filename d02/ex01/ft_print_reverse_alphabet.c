/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 08:23:53 by xamartin          #+#    #+#             */
/*   Updated: 2017/09/08 08:34:32 by xamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_print_reverse_alphabet(void)
{
	char	a;

	a = 122;
	while (a > 96)
		ft_putchar(a--);
}

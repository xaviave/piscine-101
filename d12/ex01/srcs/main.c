/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 21:41:04 by xamartin          #+#    #+#             */
/*   Updated: 2017/09/22 12:27:07 by xamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_error(char *str)
{
	int		i;

	i = 0;
	write(2, "ft_cat: ", 8);
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	write(2, ": No such file or directory\n", 28);
}

int			main(int ac, char *av[])
{
	int		fd;
	int		i;
	char	buf[BUF_SIZE];

	if (ac == 1)
		while (1)
		{}
	i = 1;
	while (i < ac)
	{
		fd = open(av[i], O_RDONLY);
		if (read(fd, &buf, 1) == -1)
			ft_error(av[i]);
		else
		{
			fd = open(av[i], O_RDONLY);
			while (read(fd, &buf, 1) != 0)
				write(1, &buf, 1);
			close(fd);
		}
		i++;
	}
	return (0);
}

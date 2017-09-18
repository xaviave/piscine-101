/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/17 10:06:34 by xamartin          #+#    #+#             */
/*   Updated: 2017/09/18 14:36:55 by xamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FT_HEADER_H
# define _FT_HEADER_H

# include <stdlib.h>
# include <unistd.h>

# define TRUE 1
# define FALSE 0

typedef int	t_bool;

void	ft_putchar(char c);
void	affichage(int **sudoku);
int		check(int **sudoku, int x, int y, int k);
int		valide(int **sudoku, int p);
int		*ft_strdup(char *src);
int		possible(char *ag[]);

#endif

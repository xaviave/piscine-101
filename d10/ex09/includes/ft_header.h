/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 21:43:26 by xamartin          #+#    #+#             */
/*   Updated: 2017/09/15 22:56:23 by xamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FT_HEADER_H
# define _FT_HEADER_H

# include <unistd.h>

int						ft_add(long a, long b);
int						ft_sub(long a, long b);
int						ft_mul(long a, long b);
int						ft_div(long a, long b);
int						ft_mod(long a, long b);
int						ft_usage(long a, long b);
int						ft_strcmp(char *s1, char *s2);
long					ft_atoi(char *str);
void					ft_putnbr(int nb);
void					ft_putchar(char c);
void					zero(int i);

typedef struct			s_opp
{
	char				*str;
	int					(*f)(long a, long b);
}						t_opp;

#endif

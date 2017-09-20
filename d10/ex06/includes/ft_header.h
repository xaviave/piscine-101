/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 21:43:26 by xamartin          #+#    #+#             */
/*   Updated: 2017/09/18 16:47:36 by xamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FT_HEADER_H
# define _FT_HEADER_H

# include <unistd.h>

int						ft_add(int a, int b);
int						ft_sub(int a, int b);
int						ft_mul(int a, int b);
int						ft_div(int a, int b);
int						ft_mod(int a, int b);
int						ft_usage(int a, int b);
int						ft_strcmp(char *s1, char *s2);
int						ft_atoi(char *str);
void					ft_putnbr(int nb);
void					ft_putchar(char c);
void					zero(int i);

typedef struct			s_opp
{
	char				*str;
	int					(*f)(int a, int b);
}						t_opp;

#endif

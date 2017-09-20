/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 16:04:59 by xamartin          #+#    #+#             */
/*   Updated: 2017/09/18 22:20:09 by xamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_star(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '*')
			return (1);
		i++;
	}
	return (0);
}

int			match(char *s1, char *s2)
{
	int		i;

	i = 0;
	if (s1[i] == '\0' && s2[i] == '\0')
		return (1);
	else if (s1[i] == '\0' || s2[i] == '\0')
		return (0);
	else if (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		return (match(s1 + 1, s2 + 1));
	else if (s2[i] == '*' && s1[i] != '\0' && s2[i] != '\0')
		return (match(s1 + 1, s2) || match(s1 + 1, s2 + 1));
	else
		return (0);
}

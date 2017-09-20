/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 21:35:45 by xamartin          #+#    #+#             */
/*   Updated: 2017/09/20 11:58:36 by xamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list		*ft_create_elem(void *data)
{
	t_list *new_list;

	if (!(new_list = malloc(sizeof(t_list))))
		return ;
	new_list->data = data;
	new_list->next = NULL;
	return (new_list);
}

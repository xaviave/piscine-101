/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 13:01:47 by xamartin          #+#    #+#             */
/*   Updated: 2017/09/20 18:31:59 by xamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new_list;

	*begin_list = ft_create_elem(data);
	while (t_list->next != NULL)
		t_list = t_list->next;
}

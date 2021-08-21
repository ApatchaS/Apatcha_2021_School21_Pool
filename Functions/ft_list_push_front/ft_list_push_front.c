/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 18:01:29 by asippy            #+#    #+#             */
/*   Updated: 2021/08/19 18:01:30 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*element;

	if (*begin_list)
	{
		element = ft_create_elem(data);
		element->next = *begin_list;
		*begin_list = element;
	}
	else
	{
		element = ft_create_elem(data);
		*begin_list = element;
		element->next = (void *)0;
	}
	return ;
}

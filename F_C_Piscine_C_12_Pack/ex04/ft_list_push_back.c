/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 22:14:13 by asippy            #+#    #+#             */
/*   Updated: 2021/08/19 22:14:14 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*element;
	t_list	*begin;

	if (*begin_list)
	{
		element = ft_create_elem(data);
		begin = *begin_list;
		while (begin->next != (void *)0)
			begin = begin->next;
		begin->next = element;
		element->next = (void *)0;
	}
	else
	{
		element = ft_create_elem(data);
		*begin_list = element;
		element->next = (void *)0;
	}
	return ;
}

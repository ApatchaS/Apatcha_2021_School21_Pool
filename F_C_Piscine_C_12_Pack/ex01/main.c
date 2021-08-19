/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 18:01:18 by asippy            #+#    #+#             */
/*   Updated: 2021/08/19 18:01:21 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	ft_list_push_front(t_list **begin_list, void *data);

t_list	*ft_create_elem(void *data)
{
	t_list	*buf;

	buf = (t_list *)malloc(sizeof(t_list));
	if (buf == (void *)0)
		return ((void *)0);
	buf->data = data;
	buf->next = (void *)0;
	return (buf);
}

void	display_list(t_list *begin)
{
	while (begin)
	{
		printf("%d\n", (int)begin->data);
		begin = begin->next;
	}
	printf("END OF LIST\n");
}

int	main(void)
{
	t_list	*begin;
	t_list	*first = ft_create_elem((int *)12);
	t_list	*second = ft_create_elem((int *)21);

	begin = first;
	first->next = second;
	second->next = (void *)0;
	display_list(begin);
	ft_list_push_front(&begin, (int *)42);
	display_list(begin);
	return (0);
}

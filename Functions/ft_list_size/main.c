/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 20:51:04 by asippy            #+#    #+#             */
/*   Updated: 2021/08/19 20:51:05 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_list_size(t_list *begin_list);

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
	t_list	*begin_list;

	begin_list = begin;
	while (begin_list)
	{
		printf("%d\n", (int)begin_list->data);
		begin_list = begin_list->next;
	}
	printf("END OF THE LIST\n");
}

int	main(void)
{
	t_list	*begin;
	t_list	*first = ft_create_elem((int *)111);
	t_list	*second = ft_create_elem((int *)222);
	t_list	*third = ft_create_elem((int *)333);

	begin = first;
	first->next = second;
	second->next = third;
	third->next = (void *)0;
	display_list(begin);
	printf("Size of the list: %d\n", ft_list_size(begin));
	return (0);
}

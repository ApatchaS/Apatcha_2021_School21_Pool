/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 22:14:30 by asippy            #+#    #+#             */
/*   Updated: 2021/08/19 22:14:32 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	ft_list_push_back(t_list **begin_list, void *data);

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
		printf("%s\n", (char *)begin_list->data);
		begin_list = begin_list->next;
	}
	printf("END OF THE LIST\n");
}

int	main(void)
{
	t_list	*begin;
	t_list	*first = ft_create_elem((char **) "sad");
	t_list	*second = ft_create_elem((char **) "boy");
	t_list	*third = ft_create_elem((char **) "next door");

	begin = first;
	first->next = second;
	second->next = third;
	third->next = (void *)0;
	display_list(begin);
	ft_list_push_back(&begin, (char **)"feel my finger in your ass");
	display_list(begin);
	return (0);
}

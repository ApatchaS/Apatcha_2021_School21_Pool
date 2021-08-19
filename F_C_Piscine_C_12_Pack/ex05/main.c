/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 23:08:01 by asippy            #+#    #+#             */
/*   Updated: 2021/08/19 23:08:03 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

t_list	*ft_list_push_strs(int size, char **strs);

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
	char	*strs[] = {"Hey", "Boy", "Next", "Door", "cum"};
	int		size;

	size = sizeof(strs) / sizeof(*strs);
	display_list(ft_list_push_strs(size, strs));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 18:29:31 by asippy            #+#    #+#             */
/*   Updated: 2021/08/19 18:29:32 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

t_list	*ft_create_elem(void *data);

void	display_list(t_list *begin)
{
	while (begin)
	{
		printf("%d\n", (int) begin->data);
		begin = begin->next;
	}
}

int	main(void)
{
	t_list	*begin;
	t_list	*first = ft_create_elem((int *) 100);
	t_list	*second = ft_create_elem((int *) 200);

	begin = first;
	first -> next = second;
	second -> next = (void *)0;
	display_list(begin);
	return (0);
}

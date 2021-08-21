/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 20:10:46 by asippy            #+#    #+#             */
/*   Updated: 2021/08/20 20:10:48 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>

t_btree *btree_create_node(void *item);

int	main(void)
{
	t_btree	*first = btree_create_node((int *) 100);
	t_btree	*second = btree_create_node((int *) 200);

	printf("First element: %d\nSecond element: %d\n", (int)first->item, (int)second->item);
	return (0);
}


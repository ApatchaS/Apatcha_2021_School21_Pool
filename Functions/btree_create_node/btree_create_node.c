/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 20:09:10 by asippy            #+#    #+#             */
/*   Updated: 2021/08/20 20:09:12 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*buf;

	buf = (t_btree *)malloc(sizeof(t_btree));
	if (buf == (void *)0)
		return ((void *)0);
	buf->item = item;
	buf->left = (void *)0;
	buf->right = (void *)0;
	return (buf);
}

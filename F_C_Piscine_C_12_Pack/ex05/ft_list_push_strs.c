/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 23:08:08 by asippy            #+#    #+#             */
/*   Updated: 2021/08/19 23:08:10 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	int		i;
	t_list	*el;
	t_list	*end;

	i = 0;
	end = (void *) 0;
	while (i < size)
	{
		el = ft_create_elem((char **)strs[i]);
		el->next = end;
		end = el;
		i++;
	}
	return (end);
}

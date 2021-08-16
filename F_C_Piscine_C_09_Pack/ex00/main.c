/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 19:01:02 by asippy            #+#    #+#             */
/*   Updated: 2021/08/16 19:15:16 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *c);
int		ft_strlen(char *c);

int	main(void)
{
	int	c;

	c = ft_strlen("123456789");
	printf("%d\n", c);
	ft_putchar('a');
	ft_putstr("\nI'm apatcha\n");
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnidoran <bnidoran@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 12:24:01 by bnidoran          #+#    #+#             */
/*   Updated: 2021/08/08 15:03:36 by bnidoran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

int	main(void)
{
	rush(5, 3);
	rush(5, 1);
	rush(1, 1);
	rush(1, 5);
	rush(4, 4);
	rush(10, 10);
	rush(-1, -1);
	rush(-10, -10);
	return (0);
}

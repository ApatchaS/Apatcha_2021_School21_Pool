/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnidoran <bnidoran@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 12:24:02 by bnidoran          #+#    #+#             */
/*   Updated: 2021/08/08 15:59:08 by bnidoran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

const char	g_chars[3][3] = {"/*\\", "* *", "\\*/"};

void	write_line(int x, int type)
{
	ft_putchar(g_chars[type][0]);
	while (--x > 1)
		ft_putchar(g_chars[type][1]);
	if (x > 0)
		ft_putchar(g_chars[type][2]);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		write_line(x, 0);
		while (--y > 1)
			write_line(x, 1);
		if (y > 0)
			write_line(x, 2);
	}
}

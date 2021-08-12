/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 18:22:48 by asippy            #+#    #+#             */
/*   Updated: 2021/08/07 20:25:37 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_numeric_or_alpha(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (3);
	}
	if (c >= 'a' && c <= 'z')
	{
		return (2);
	}
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		while (ft_is_numeric_or_alpha(str[i]) == 0)
		{
			i++;
		}
		if (ft_is_numeric_or_alpha(str[i]) == 2)
		{
			str[i] -= 32;
			i++;
		}
		while (ft_is_numeric_or_alpha(str[i]) != 0)
		{
			if (ft_is_numeric_or_alpha(str[i]) == 3)
			{
				str[i] += 32;
			}
			i++;
		}
	}
	return (str);
}

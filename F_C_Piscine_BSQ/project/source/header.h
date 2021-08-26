/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 16:21:09 by asippy            #+#    #+#             */
/*   Updated: 2021/08/21 21:48:14 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_block
{
	int		x;
	int		y;
}			t_block;

typedef struct s_draw
{
	int		x;
	int		y;
	int		size;
}			t_draw;

void	ft_work_with_term(void);
void	ft_work_with_file(char *file);
char	*ft_get_first_line(char *file);
int		ft_parse_first_line(char *buf, char *tab);
int		ft_strlen(char *str);
t_block	*ft_map_valid(char *file, int line_count, char *tab, char *buf);
int		ft_get_obst_count(char *file, int line_count, char *tab, char *buf);
int		ft_open_skip_first_line(char *file, char *buf);
int		ft_line_size_valid(char *file, int line_count, char *buf);
void	find_big_sqr(t_block *arr_block, int **matrix);
t_draw	pos_sqrt(t_block *arr_block, int **matrix);
int		**draw_matrix(t_block *arr_block);
void	ft_draw_sqrt(int **matrix, t_block *arr_block,
			t_draw pos, char *symbols);

#endif

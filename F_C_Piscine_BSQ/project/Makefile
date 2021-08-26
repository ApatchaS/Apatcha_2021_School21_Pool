# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asippy <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/21 14:44:40 by asippy            #+#    #+#              #
#    Updated: 2021/08/21 21:35:06 by asippy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= bsq

SRCS		= main.c\
			ft_work_with_term.c\
			ft_work_with_file.c\
			ft_get_first_line.c\
			ft_parse_first_line.c\
			ft_line_and_obstacles.c\
			ft_strlen.c\
			ft_map_valid.c\
			ft_find_sqrt.c\
			ft_draw_sqrt.c

PREFIX		= source/

PREFIXSRCS	= $(addprefix $(PREFIX), $(SRCS))

OBJS		= $(patsubst %.c, %.o, $(PREFIXSRCS))

CC			= gcc

CFLAGC		= -Wall -Werror -Wextra

RM			= rm -f

%.o:		%.c
			$(CC) $(CFLAGC) -c $< -o $@

$(NAME):	$(OBJS)
			$(CC) -o $(NAME) $(OBJS)

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asippy <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/17 15:31:25 by asippy            #+#    #+#              #
#    Updated: 2021/08/17 18:03:07 by asippy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ft_display_file

SRCS		= main.c\
			  ft_display_file.c

PREFIX		= source/

SRCSPREF	= $(addprefix $(PREFIX),$(SRCS))

OBJS		= $(patsubst %.c,%.o,$(SRCSPREF))

CC			= gcc

CFLAGC		= -Wall -Wextra -Werror

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

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asippy <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/16 20:34:27 by asippy            #+#    #+#              #
#    Updated: 2021/08/17 14:23:35 by asippy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

SRCS		= ft_putchar.c\
			  ft_swap.c\
			  ft_putstr.c\
			  ft_strlen.c\
			  ft_strcmp.c

PREFIX		= srcs/

SRCSPREF	= $(addprefix $(PREFIX),$(SRCS))

OBJS 		= $(patsubst %.c,%.o,$(SRCSPREF))

CC			= gcc

RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror

%.o: 		%.c
			$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
			ar rcs $(NAME) $?

all:		$(NAME)

clean:		
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re

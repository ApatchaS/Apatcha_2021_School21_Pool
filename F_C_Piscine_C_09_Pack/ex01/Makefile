# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asippy <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/16 20:34:27 by asippy            #+#    #+#              #
#    Updated: 2021/08/16 23:06:03 by asippy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

SRCS		= srcs/ft_putchar.c\
			  srcs/ft_swap.c\
			  srcs/ft_putstr.c\
			  srcs/ft_strlen.c\
			  srcs/ft_strcmp.c

OBJS 		= $(patsubst %.c,%.o,$(SRCS))

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

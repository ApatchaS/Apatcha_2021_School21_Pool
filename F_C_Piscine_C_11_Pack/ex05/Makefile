NAME		= do-op

SRCS		= ft_atoi.c ft_putnbr.c ft_check_op.c ft_check_values.c ft_solution.c main.c

PREFIX		= source/

PREFIXSRCS	= $(addprefix $(PREFIX),$(SRCS))

OBJS		= $(patsubst %.c,%.o,$(PREFIXSRCS))

CC			= gcc

CFLAGC		= -Wall -Werror -Wextra

RM			= rm -f

%.o:		%.c
			$(CC) $(CFLAGC) -c $< -o $@

all:		$(NAME)

$(NAME): 	$(OBJS) 
			$(CC) -o $(NAME) $(OBJS)

clean:		
			$(RM) $(OBJS)

fclean:		clean 
			$(RM) $(NAME)

re:			fclean all

.PHONY: all clean fclean re
NAME		= ft_cat

SRCS		= main.c\
			  ft_cat.c\
			  ft_stand_out.c

PREFIX		= source/

PREFIXSRCS	= $(addprefix $(PREFIX),$(SRCS))

OBJS		= $(patsubst %.c,%.o,$(PREFIXSRCS))

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

RM			= rm -f

%.o:		%.c
			$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
			$(CC) -o $(NAME) $(OBJS)

all:		$(NAME)

clean:		
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re

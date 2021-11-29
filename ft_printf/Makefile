NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror

LIBFT = libft

HEADER = ft_printf.h

SRCS = $(wildcard *.c)

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@make -C $(LIBFT)
	@cp libft/libft.a ./$(NAME)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

#.o.c:
#	@$(CC) $(CFLAGS) -I $(HEADER) -o $@ -c $<

clean:
	@rm -f $(OBJS)
	@make clean -C $(LIBFT)

fclean: clean
	@rm -f $(NAME)
	@make fclean -C $(LIBFT)

re: fclean all

.PHONY: all clean fclean re

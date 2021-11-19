NAME = libftprint.a

SRCS = ${wildcard *.c}
OBJS = ${SRCS:.c=.o}
LIBFT = ${wildcard libft/libft/*.c}
LIBFTOBJS = ${LIBFT:.c=.o}
HFIL = ${wildcard *.h}

CC = gcc
FLAGS = -Wall -Werror -Wextra -g -fsanitize=address
RM = rm -rf

all: ${NAME}

.c.o:
	${CC} ${FLAGS} -c $< ${<:.c.o} - I.${INCS}

${NAME}: runlibft ${OBJS}
	ar rcs ${NAME} ${OBJS} ${LIBFTOBJS}
	runlib ${NAME}

runlibft:
	make -C libft bonus

clean:
	${RM} ${NAME}
	${MAKE} -C libft clean

fclean: clean
	${RM} ${NAME}
	${MAKE} -C libft fclean

re: fclean all

.PHONY: all clean fclean re

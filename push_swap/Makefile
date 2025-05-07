# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/07 20:29:45 by ncampo            #+#    #+#              #
#    Updated: 2025/05/07 20:29:47 by ncampo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CHECK = checker

SRCS =  $(wildcard src/*.c utils/*.c)
CHECK_SRCS = $(wildcard utils/*.c) src/instructions.c checker.c

OBJS = ${SRCS:.c=.o}
CHECK_OBJS = ${CHECK_SRCS:.c=.o}

CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iincludes

RM = rm -rf

all: ${NAME} ${CHECK}
${NAME}: ${OBJS}
	@${MAKE} -C ./libft
	@${CC} ${CFLAGS} ${OBJS} ./libft/libft.a -o ${NAME}

${CHECK}: ${CHECK_OBJS} 
	@${CC} ${CFLAGS} ${CHECK_OBJS} ./libft/libft.a -o ${CHECK}

clean: 
	@${MAKE} -C ./libft fclean
	@${RM} ${OBJS}
	@${RM} ${CHECK_OBJS}

fclean: clean
	@${RM} ${NAME}
	@${RM} ${CHECK}

re: fclean all

.PHONY: all clean fclean re

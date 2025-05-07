# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/07 19:22:20 by ncampo            #+#    #+#              #
#    Updated: 2025/05/07 19:22:33 by ncampo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

SRCS		= $(shell find "." -name "*.c")

OBJS		= ${SRCS:.c=.o}
BONUS_OBJS 	= ${BONUSES:.c=.o}

CC		= gcc
RM		= rm -rf
CFLAGS		= -Wall -Wextra -Werror
AR		= ar csr

.c.o :
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all : ${NAME}

$(NAME) : ${OBJS}
	@${AR} libft.a ${OBJS}

clean :
	@${RM} ${OBJS} ${BONUS_OBJS}

fclean : clean
	@${RM} ${NAME}

re : fclean all

.PHONY: all clean fclean re .c.o

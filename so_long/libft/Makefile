# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/04 14:53:34 by cfeliz-r          #+#    #+#              #
#    Updated: 2025/06/06 21:40:18 by ncampo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= ft_atoi.c \
		  ft_bzero.c \
		  ft_calloc.c \
		  ft_isalnum.c \
		  ft_isalpha.c \
		  ft_isascii.c \
		  ft_isdigit.c \
		  ft_isprint.c \
		  ft_itoa.c \
		  ft_memchr.c \
		  ft_memcmp.c \
		  ft_memcpy.c \
		  ft_memmove.c \
		  ft_memset.c \
		  ft_putchar_fd.c \
		  ft_putendl_fd.c \
		  ft_putnbr_fd.c \
		  ft_putstr_fd.c \
		  ft_split.c \
		  ft_strchr.c \
		  ft_strdup.c \
		  ft_striteri.c \
		  ft_strjoin.c \
		  ft_strlcat.c \
		  ft_strlcpy.c \
		  ft_strlen.c \
		  ft_strmapi.c \
		  ft_strncmp.c \
		  ft_strnstr.c \
		  ft_strrchr.c \
		  ft_strtrim.c \
		  ft_substr.c \
		  ft_tolower.c \
		  ft_toupper.c \
		  ft_strcmp.c \
		  ft_printf.c \
		  ft_number.c \
		  ft_putstr.c \
		  ft_words.c \
		  get_next_line/get_next_line.c \
		  get_next_line/get_next_line_utils.c \
		  get_next_line/get_next_line_bonus.c \
		  get_next_line/get_next_line_utils_bonus.c

SRCS_BONUS	= ft_lstadd_back.c \
		  ft_lstadd_front.c \
		  ft_lstclear.c \
		  ft_lstdelone.c \
		  ft_lstiter.c \
		  ft_lstlast.c \
		  ft_lstmap.c \
		  ft_lstnew.c \
		  ft_lstsize.c

OBJS		= ${SRCS:.c=.o}
OBJS_BONUS	= ${SRCS_BONUS:.c=.o}
NAME		= libft.a
CC		= gcc
CFLAGS		= -Wall -Wextra -Werror

%.o: %.c libft.h
		@${CC} ${CFLAGS} -I. -c $< -o $@

all:		${NAME}

$(NAME):	${OBJS} libft.h
		@ar rcs ${NAME} ${OBJS}

bonus:		${OBJS_BONUS} libft.h
		@ar rcs ${NAME} ${OBJS_BONUS}

clean:
		@rm -f ${OBJS} ${OBJS_BONUS}

fclean:		clean
		@rm -f ${NAME}

re:		fclean all

.PHONY:	all clean fclean re bonus

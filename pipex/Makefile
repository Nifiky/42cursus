# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/05 22:40:20 by ncampo            #+#    #+#              #
#    Updated: 2025/05/05 22:51:21 by ncampo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pipex
CC = gcc
CFLAGS = -Wall -Wextra -Werror

S_DIR = src
L_DIR = libft
LIBFT = $(L_DIR)/libft.a

SRCS = $(S_DIR)/pipex.c $(S_DIR)/pipex_utils.c
OBJS = $(SRCS:.c=.o)

all: $(LIBFT) $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) -L$(L_DIR) -lft -o $(NAME)
	echo "\n PIPEX LISTO "


$(S_DIR)/%.o: $(S_DIR)/%.c
	$(CC) $(CFLAGS) -I $(L_DIR) -c $< -o $@

$(LIBFT):
	make -C $(L_DIR)

clean:
	rm -f $(OBJS)
	make clean -C $(L_DIR)

fclean: clean
	rm -f $(NAME)
	make fclean -C $(L_DIR)

re: fclean all

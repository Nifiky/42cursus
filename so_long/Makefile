# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/06 18:44:29 by ncampo            #+#    #+#              #
#    Updated: 2025/06/11 20:32:31 by ncampo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	so_long
CC			=	gcc
FLAGS		=	-Wall -Wextra -Werror -g -fsanitize=address
MLX_DIR		=	minilibx-linux
LFT			=	libft/libft.a
INC			=	-I ./libft -I ./minilibx-linux
LIB			=	-L ./libft -lft -L ./minilibx-linux -lmlx -lXext -lX11 -lm -lbsd
SRC			=	src/draw_and_render.c \
				src/handle_key_event.c \
				src/initialize_map.c \
				src/map_isvalid.c \
				src/map_parsing.c \
				src/mlx_utils.c \
				src/movements_player.c \
				src/root_destroy.c \
				src/root_init.c \
				src/so_long.c \
				src/flood_fill.c \
				src/update.c

OBJ			=	$(SRC:src/%.c=obj/%.o)

all:		$(MLX_DIR)/libmlx.a $(LFT) obj $(NAME)

$(NAME):	$(OBJ)
			$(CC) $(FLAGS) -o $@ $^ $(LIB)

$(MLX_DIR)/libmlx.a:
			@echo " [ .. ] | Compiling minilibx.."
			@make -s -C $(MLX_DIR)
			@echo " [ OK ] | Minilibx ready!"

$(LFT):		
			@echo " [ .. ] | Compiling libft.."
			@make -s -C libft
			@echo " [ OK ] | Libft ready!"

obj:
			@mkdir -p obj

obj/%.o:	src/%.c
			$(CC) $(FLAGS) $(INC) -o $@ -c $<

clean:
			@make -s $@ -C libft
			@rm -rf $(OBJ) obj
			@echo "object files removed."

fclean:		clean
			@make -s $@ -C libft
			@make -s clean -C $(MLX_DIR)
			@rm -rf $(NAME)
			@echo "binary file removed."
			
re:			fclean all

.PHONY:		all clean fclean re normi

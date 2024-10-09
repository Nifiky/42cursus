NAME = libft.a

SRCS = ft_isalpha.c \
ft_isdigit.c \
ft_isalnum.c \
ft_isascii.c \
ft_isprint.c \
ft_strlen.c \
ft_memset.c \
ft_bzero.c \
ft_memcpy.c \
ft_strlcpy.c \
ft_strlcat.c \
ft_toupper.c \
ft_tolower.c \
ft_strchr.c \
ft_strrchr.c \
ft_strncmp.c \
ft_strnstr.c \
ft_memmove.c \
ft_memchr.c \
ft_memcmp.c \

OBJS = $(SRCS:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I .
all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)
%.o: %.c
	${CC} ${CFLAGS} ${INCLUDE} -c $< -o $@
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
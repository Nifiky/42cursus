NAME = libft.a

SRCS = ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
ft_isspace.c ft_strlcat.c ft_strlen.c ft_strncmp.c ft_tolower.c ft_toupper.c ft_memset.c \
ft_memmove.c ft_memcpy.c ft_strlcpy.c ft_strnstr.c ft_bzero.c ft_strchr.c\
ft_strrchr.c ft_calloc.c ft_memcmp.c ft_strdup.c ft_memchr.c ft_putstr_fd.c\
ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c ft_substr.c\
ft_strjoin.c ft_strtrim.c ft_striteri.c ft_itoa.c ft_split.c

BONUS =  ft_lstnew.c ft_lstadd_front.c ft_lstlast.c ft_lstadd_back.c\
ft_lstdelone.c ft_lstsize.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

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
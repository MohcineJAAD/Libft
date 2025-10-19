CC = cc
NAME = libft.a
SRCS = ft_bzero.c    ft_isalpha.c  ft_isdigit.c  ft_memcpy.c   ft_memset.c   ft_strlen.c \
   ft_isalnum.c  ft_isascii.c  ft_isprint.c  ft_memmove.c  ft_strlcpy.c
OBJS = $(SRCS:.c=.o)
FLAGS = -Wall -Wextra -Werror

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
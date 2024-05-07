CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_printf.c ft_hexa.c ft_print_adress.c ft_uns_decimal.c ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_strchr.c ft_strlen.c
OBJS = $(SRCS:.c=.o)
NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

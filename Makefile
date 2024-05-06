# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tunglaub <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/06 15:41:27 by tunglaub          #+#    #+#              #
#    Updated: 2024/05/06 15:43:52 by tunglaub         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a

SRC = ft_printf.c
OBJ = $(SRC:.c=.o)

LIBFT_DIR = libft
LIBFT_SRC = $(addprefix $(LIBFT_DIR)/, ft_hexa.c ft_strlen.c ft_strchr.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c)
LIBFT_OBJ = $(LIBFT_SRC:.c=.o)
LIBFT = $(LIBFT_DIR)/libft.a

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
    $(CC) $(CFLAGS) -o $@ $^

$(LIBFT): $(LIBFT_OBJ)
    @make -C $(LIBFT_DIR)

%.o: %.c
    $(CC) $(CFLAGS) -o $@ -c $<

clean:
    @rm -f $(OBJ)
    @make -C $(LIBFT_DIR) clean

fclean: clean
    @rm -f $(NAME)
    @make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
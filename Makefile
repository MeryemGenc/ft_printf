# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgencali <mgencali@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/05 14:59:28 by mgencali          #+#    #+#              #
#    Updated: 2023/12/15 13:42:05 by mgencali         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf
FLAG = -Wall -Wextra -Werror
SRC = ft_printf.c ft_count_nbr.c ft_putchar.c ft_putnbr.c ft_putnbr_hex.c ft_putstr.c ft_strlen.c main.c

all: $(NAME)

$(NAME): $(SRC)
	gcc $(FLAG) $(SRC) -o $(NAME)
clean:
	rm -f  *.o
fclean: clean
	rm -f $(NAME) *.out

re: fclean all

.PHONY: all clean fclean re



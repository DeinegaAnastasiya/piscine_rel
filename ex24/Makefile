# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: poatmeal <poatmeal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/08 13:00:21 by poatmeal          #+#    #+#              #
#    Updated: 2019/09/08 13:45:08 by poatmeal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INCLUDES = includes/

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

NAME = libft.a

OUT = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: 
	gcc -Wall -Wextra -Werror -c $(SRCS) -I $(INCLUDES)
	ar rc $(NAME) $(OUT)

clean: 
	rm -rf $(OUT)

fclean: clean
	rm -rf $(NAME)

re: fclean all

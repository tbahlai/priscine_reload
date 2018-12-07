#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbahlai <tbahlai@student.unit.ua>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/24 16:43:09 by tbahlai           #+#    #+#              #
#    Updated: 2018/10/24 16:43:43 by tbahlai          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

SRCS = srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c \
	 srcs/ft_swap.c srcs/ft_putchar.c

OUT = ft_putchar.o ft_swap.o ft_strcmp.o ft_strlen.o ft_putstr.o

INCLUDE = includes/

all: lib

lib:
	gcc -Wall -Wextra -Werror -c $(SRCS) -I $(INCLUDE)
	ar -rc $(NAME) $(OUT)
	ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
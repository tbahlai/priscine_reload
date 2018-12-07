#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbahlai <tbahlai@student.unit.ua>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/24 16:57:23 by tbahlai           #+#    #+#              #
#    Updated: 2018/10/24 17:00:44 by tbahlai          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = ft_display_file

SRC = *.c

all: $(NAME)

$(NAME):
	gcc -Werror -Wextra -Wall $(SRC) -o $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
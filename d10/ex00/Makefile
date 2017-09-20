# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xamartin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/16 20:17:04 by xamartin          #+#    #+#              #
#    Updated: 2017/09/20 16:35:14 by xamartin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

SRCS_DIR=./srcs

RAW_SRCS=\
		 ft_putchar.c\
		 ft_swap.c\
		 ft_strcmp.c\
		 ft_strlen.c\
		 ft_putstr.c

OBJ=\
	ft_putchar.o\
	ft_swap.o\
	ft_strcmp.o\
	ft_strlen.o\
	ft_putstr.o

SRCS=$(addprefix $(SRCS_DIR)/,$(RAW_SRCS))

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRCS)
	ar rc $(NAME) $(OBJ)

all: $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

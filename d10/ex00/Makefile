# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xamartin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/16 20:17:04 by xamartin          #+#    #+#              #
#    Updated: 2017/09/16 20:17:08 by xamartin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all, clean, fclean, re

NAME = libft.a

SRCS_DIR = ./srcs

RAW_SRCS =\
		  ft_putchar.c\
		  ft_swap.c\
		  ft_strcmp.c\
		  ft_strlen.c\
		  ft_putstr.c

OBJ = $(RAW_SRCS:.c=.o)

SRCS = $(addprefix $(SRCS_DIR)/,$(RAW_SRCS))

CC = gcc
CFLAGS = -c -Wall -Wextra -Werror
AR = ar rc

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(OBJ) -o $(NAME)
	@$(AR) $(OBJ)

$(OBJ):
	@$(CC) $(CFLAGS) -c $(SRCS)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all


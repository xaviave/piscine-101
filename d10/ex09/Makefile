# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xamartin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/14 21:22:16 by xamartin          #+#    #+#              #
#    Updated: 2017/09/15 22:32:20 by xamartin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all, clean, fclean, re

NAME = ft_advanced_do-op

SRCS_DIR = ./srcs
INC_DIR = ./includes/

RAW_SRCS =\
		  ft_usage.c\
		  calcul.c\
		  aff.c\
		  zero.c\
		  main.c

OBJ = $(RAW_SRCS:.c=.o)

SRCS = $(addprefix $(SRCS_DIR)/,$(RAW_SRCS))

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(OBJ) -o $(NAME)
	@rm -f $(OBJ)

$(OBJ):
	@$(CC) $(CFLAGS) -I $(INC_DIR) -c $(SRCS)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

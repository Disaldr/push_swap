# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmumm <kmumm@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/27 13:51:11 by kmumm             #+#    #+#              #
#    Updated: 2022/03/27 14:11:37 by kmumm            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap
BONUS_NAME = checker

HEADER = push_swap.h

SORT_PATH = ./sort/
SORT =	ft_sort.c \
		ft_sort_three.c \
		ft_sort_four.c \
		ft_sort_five.c \
		ft_sort_big.c \

UTILS_PATH = ./utils/
UTILS = ft_list.c\
		parse_args.c \
		ft_utils.c \

GNL_PATH = ./get_next_line/
GNL = 	get_next_line.c \
		get_next_line_utils.c \

COMM_PATH = ./commands/
COMM =	pa.c \
		pb.c \
		ra.c \
		rb.c \
		rr.c \
		rra.c \
		rrb.c \
		rrr.c \
		sa.c \
		sb.c \
		ss.c \

SRCS = push_swap.c $(addprefix $(UTILS_PATH), $(UTILS)) $(addprefix $(COMM_PATH), $(COMM)) $(addprefix $(SORT_PATH), $(SORT))
SRCS_BONUS = checker.c $(addprefix $(UTILS_PATH), $(UTILS)) $(addprefix $(COMM_PATH), $(COMM)) $(addprefix $(SORT_PATH), $(SORT)) $(addprefix $(GNL_PATH), $(GNL))

OBJ = $(patsubst %.c, %.o, $(SRCS))
OBJ_BONUS = $(patsubst %.c, %.o, $(SRCS_BONUS))

CC = gcc
FLAGS = -o2 -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -I $(HEADER) -o $@

%.o: %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

bonus: $(BONUS_NAME)

$(BONUS_NAME): $(OBJ_BONUS)
	$(CC) $(OBJ_BONUS) -I $(HEADER) -o $@

clean:  
	rm -rf $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -rf $(NAME) $(BONUS_NAME)

re: fclean all

.PHONY: all clean fclean re bonus
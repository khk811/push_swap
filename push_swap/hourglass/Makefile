# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/11 12:13:42 by hyunkkim          #+#    #+#              #
#    Updated: 2022/05/02 14:46:51 by hyunkkim         ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

NAME=push_swap
BONUS=checker
CC=cc
CFLAGS=-Wall -Wextra -Werror
LIB_NAME=ftprintf
LIB_DIR= ./ft_printf/
LIB=$(LIB_DIR)lib$(LIB_NAME).a
LIBFT=libftprintf.a
INCLUDE=-I ./Libft -I ./ft_printf
RM=rm -f
CP=cp
SRC= main.c \
	parse_input.c \
	add_elem_bottom.c \
	stack_utils.c \
	operations.c \
	sort_below_five.c \
	a_to_b.c \
	b_to_a.c \
	utils.c
SRC_BONUS = main_bonus.c \
			parse_input_bonus.c \
			add_elem_bottom_bonus.c \
			parse_operation_bonus.c \
			do_sort_op_bonus.c \
			operations_bonus.c \
			stack_utils_bonus.c \
			utils_bonus.c
OBJ=$(SRC:.c=.o)
OBJ_BONUS=$(SRC_BONUS:.c=.o)

$(NAME) :$(LIB) $(OBJ)
	$(CC) $(CFLAGS) -L$(LIB_DIR) -l$(LIB_NAME) $(OBJ) -o $(NAME)

$(BONUS) :$(LIB) $(OBJ_BONUS)
	$(CC) $(CFLAGS) -L$(LIB_DIR) -l$(LIB_NAME) $(OBJ_BONUS) -o $(BONUS)

%.o : %.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(LIB) :
	make -C $(LIB_DIR) all
	$(CP) $(LIB) .

all : $(NAME)

clean :
	make -C $(LIB_DIR) clean
	$(RM) $(OBJ)
	$(RM) $(OBJ_BONUS)

fclean : clean
	make -C $(LIB_DIR) fclean
	$(RM) $(NAME)
	$(RM) $(BONUS)
	$(RM) $(LIBFT)

re : fclean all

bonus : $(BONUS)

.PHONY : all clean fclean re bonus

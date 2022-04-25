# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/11 12:13:42 by hyunkkim          #+#    #+#              #
#    Updated: 2022/04/25 19:41:32 by hyunkkim         ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

NAME=push_swap
CC=gcc
CFLAGS=-Wall -Wextra -Werror
LIB_NAME=ft
LIB_DIR= ./Libft/
LIB=$(LIB_DIR)lib$(LIB_NAME).a
LIBFT=libft.a
INCLUDE=-I ./Libft
RM=rm -f
CP=cp
SRC= main.c \
	parse_input.c \
	check_sort.c \
	new_stack_elem.c \
	stack_utils.c \
	push.c \
	rotate.c \
	a_to_b.c \
	b_to_a.c \
	utils.c
OBJ=$(SRC:.c=.o)

$(NAME) :$(LIB) $(OBJ)
	$(CC) $(CFLAGS) -L$(LIB_DIR) -l$(LIB_NAME) $(OBJ) -o $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(LIB) :
	make -C $(LIB_DIR) all
	make -C $(LIB_DIR) bonus
	$(CP) $(LIB) ./

all : $(NAME)

clean :
	make -C $(LIB_DIR) clean
	$(RM) $(OBJ)

fclean : clean
	make -C $(LIB_DIR) fclean
	$(RM) $(NAME)
	$(RM) $(LIBFT)

re : fclean all

leaks : $(LIB)
	$(CC) $(CFLAGS) $(INCLUDE) -L$(LIB_DIR) -l$(LIB_NAME) $(SRC) -g

clean_leaks :
	$(RM) a.out
	rm -rf a.out.dSYM

.PHONY : all clean fclean re

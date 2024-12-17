# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sklaokli <sklaoklitudent.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/18 19:44:55 by sklaokli          #+#    #+#              #
#    Updated: 2024/12/17 16:22:41 by sklaokli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## Libraries
NAME	=	push_swap
LIBFT	=	libft/libft.a

## Paths to files
SRC_DIR	=	sources
INC_DIR	=	includes

## Source files
SRC		=	$(SRC_DIR)/main/main.c $(SRC_DIR)/main/init.c \
			$(SRC_DIR)/main/push_swap.c \
			\
			$(SRC_DIR)/operation/operation.c $(SRC_DIR)/operation/push.c \
			$(SRC_DIR)/operation/swap.c $(SRC_DIR)/operation/rotate.c \
			$(SRC_DIR)/operation/reverse_rotate.c \
			\
			$(SRC_DIR)/program/parser.c $(SRC_DIR)/program/clear.c \
			\
			$(SRC_DIR)/sort/tiny_sort.c $(SRC_DIR)/sort/chunk_sort.c \
			\
			$(SRC_DIR)/utils/stack.c $(SRC_DIR)/utils/debug.c \
			$(SRC_DIR)/utils/sort_utils.c

HEADER	=	$(INC_DIR)/push_swap.h

## Convert *.c files tnto *.o files
OBJ		=	$(SRC:%.c=%.o)

## Commands
RM		=	rm -f
CC		=	cc
LIBC	=	ar rcs
FLAGS	=	-Wall -Wextra -Werror

## Color Codes
CYAN	=	\033[0;36m
GREEN	=	\033[0;32m
RED		=	\033[0;31m
BLUE	=	\033[0;34m
YELLOW	=	\033[0;33m
RESET	=	\033[0m

## Targets
%.o:		%.c
			@ $(CC) $(FLAGS) -I $(INC_DIR) -I libft/includes -c $< -o $@

all:		$(LIBFT) $(NAME)
			@ echo "$(GREEN)Done! push_swap is now ready.$(RESET)"

$(NAME):	$(OBJ)
			@ echo "$(BLUE)Building push_swap...$(RESET)"
			@ $(CC) $(FLAGS) $(OBJ) -Llibft -lft -o $(NAME)

$(LIBFT):
			@ echo "$(BLUE)Building libft...$(RESET)"
			@ $(MAKE) -sC libft

clean:
			@ $(RM) $(OBJ)
			@ $(MAKE) -sC libft clean
			@ echo "$(CYAN)All push_swap object files have been cleaned.$(RESET)"

fclean:		clean
			@ $(RM) $(NAME)
			@ $(MAKE) -sC libft fclean
			@ echo "$(CYAN)All push_swap executable files have been cleaned.$(RESET)"

re:			fclean all

.PHONY:		all clean fclean re
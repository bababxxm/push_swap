# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sklaokli <sklaokli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/18 19:44:55 by sklaokli          #+#    #+#              #
#    Updated: 2024/12/17 16:54:56 by sklaokli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## Libraries
NAME	=	libft.a

## Paths to files
SRC_DIR	=	sources
INC_DIR	=	includes

## Source files
SRC		=	$(SRC_DIR)/char/ft_isalnum.c $(SRC_DIR)/char/ft_isalpha.c \
			$(SRC_DIR)/char/ft_isascii.c $(SRC_DIR)/char/ft_isdigit.c \
			$(SRC_DIR)/char/ft_isprint.c $(SRC_DIR)/char/ft_tolower.c \
			$(SRC_DIR)/char/ft_toupper.c $(SRC_DIR)/char/ft_issign.c \
			\
			$(SRC_DIR)/int/ft_abs.c $(SRC_DIR)/int/ft_is_invalid_int.c \
			\
			$(SRC_DIR)/str/ft_strchr.c $(SRC_DIR)/str/ft_strdup.c \
			$(SRC_DIR)/str/ft_striteri.c $(SRC_DIR)/str/ft_strjoin.c \
			$(SRC_DIR)/str/ft_strlcat.c $(SRC_DIR)/str/ft_strlcpy.c \
			$(SRC_DIR)/str/ft_strlen.c $(SRC_DIR)/str/ft_strmapi.c \
			$(SRC_DIR)/str/ft_strncmp.c $(SRC_DIR)/str/ft_strnstr.c \
			$(SRC_DIR)/str/ft_strrchr.c $(SRC_DIR)/str/ft_strtrim.c \
			$(SRC_DIR)/str/ft_substr.c $(SRC_DIR)/str/ft_split.c \
			$(SRC_DIR)/str/ft_split_free.c \
			\
			$(SRC_DIR)/conv/ft_atoi.c $(SRC_DIR)/conv/ft_itoa.c \
			$(SRC_DIR)/conv/ft_atol.c \
			\
			$(SRC_DIR)/mem/ft_bzero.c $(SRC_DIR)/mem/ft_calloc.c \
			$(SRC_DIR)/mem/ft_memchr.c $(SRC_DIR)/mem/ft_memcmp.c \
			$(SRC_DIR)/mem/ft_memcpy.c $(SRC_DIR)/mem/ft_memmove.c \
			$(SRC_DIR)/mem/ft_memset.c \
			\
			$(SRC_DIR)/fd/ft_putchar_fd.c $(SRC_DIR)/fd/ft_putstr_fd.c \
			$(SRC_DIR)/fd/ft_putendl_fd.c $(SRC_DIR)/fd/ft_putnbr_fd.c \
			\
			$(SRC_DIR)/lst/ft_lstnew.c $(SRC_DIR)/lst/ft_lstlast.c \
			$(SRC_DIR)/lst/ft_lstadd_front.c $(SRC_DIR)/lst/ft_lstadd_back.c \
			$(SRC_DIR)/lst/ft_lstsize.c $(SRC_DIR)/lst/ft_lstdelone.c \
			$(SRC_DIR)/lst/ft_lstclear.c $(SRC_DIR)/lst/ft_lstiter.c \
			$(SRC_DIR)/lst/ft_lstmap.c \
			\
			$(SRC_DIR)/custom/ft_exit.c $(SRC_DIR)/custom/ft_is_empty_str.c \
			$(SRC_DIR)/custom/ft_is_invalid_argv.c

HEADER	=	$(INC_DIR)/libft.h

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
			@ $(CC) $(FLAGS) -I $(HEADER) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJ)
			@ $(LIBC) $(NAME) $(OBJ)
			@ echo "$(GREEN)Done! Libft is now ready.$(RESET)"

clean:
			@ $(RM) $(OBJ)
			@ echo "$(CYAN)All Libft object files have been cleaned.$(RESET)"

fclean:		clean
			@ $(RM) $(NAME)
			@ echo "$(CYAN)All Libft excutable files have been cleaned.$(RESET)"

re:			fclean all

.PHONY:		all clean fclean re
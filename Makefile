# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/28 15:58:05 by okapshai          #+#    #+#              #
#    Updated: 2024/06/07 17:56:10 by okapshai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libftprintf.a
SRC := ft_print_char.c \
                        ft_print_digit_maj.c \
						ft_print_digit_min.c \
						ft_print_str.c \
						ft_print_string.c \
                        ft_printf.c \
						ft_print_pointer.c \
						ft_print_pos_digit.c \
                                            
HEADER_DIR = ./

OBJ = ${SRC:.c=.o}

.c.o:
	gcc -Wall -Wall -Wextra -I $(HEADER_DIR) -c $< -o ${<:.c=.o}

$(NAME): $(OBJ)
	ar -rsc $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re bonus
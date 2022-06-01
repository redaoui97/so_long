# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnabil <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/27 15:33:33 by rnabil            #+#    #+#              #
#    Updated: 2022/05/27 15:36:48 by rnabil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Werror -Wextra -Imlx
MLX_FLAGS = -framework OpenGL -framework AppKit -lmlx
FUNCTIONS_main = so_long 
FUNCTIONS_app = App/app_init App/parsing
FUNCTIONS_src = src/src_functions src/get_next_line src/get_next_line_utils
FUNCTIONS_printf = ft_printf/ft_printf  \
		   ft_printf/print_addresse ft_printf/print_char \
		   ft_printf/print_hex_lower ft_printf/print_hex_upper \
		   ft_printf/print_nbr ft_printf/print_nbr_unsigned \
		   ft_printf/print_str
OBJS_main = $(FUNCTIONS_main:=.o)
OBJS_app = $(FUNCTIONS_app:=.o)
OBJS_src = $(FUNCTIONS_src:=.o)
OBJS_printf = $(FUNCTIONS_printf:=.o)
NAME = so_long
AR = ar rc

.PHONY: all clean fclean re bonus

all : $(NAME)

$(NAME) : $(OBJS_main) $(OBJS_app) $(OBJS_src) $(OBJS_printf)
	$(CC) $^ $(MLX_FLAGS) -o $@

%.o  : %.c so_long.h
	gcc $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJS_main) $(OBJS_app) $(OBJS_src) $(OBJS_printf)

fclean : clean
	rm -rf $(NAME)

re : fclean all

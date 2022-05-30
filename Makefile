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
FUNCTIONS_app = App/app_init
OBJS_main = $(FUNCTIONS_main:=.o)
OBJS_app = $(FUNCTIONS_app:=.o)
NAME = so_long
AR = ar rc

.PHONY: all clean fclean re bonus

all : $(NAME)

$(NAME) : $(OBJS_main) #$(OBJS_app)
	$(CC) $^ $(MLX_FLAGS) -o $@
%.o  : %.c so_long.h
	gcc $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJS_main) $(OBJS_app)

fclean : clean
	rm -rf $(NAME)

re : fclean all

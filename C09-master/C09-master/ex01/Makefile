# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/22 18:26:36 by hdelmas           #+#    #+#              #
#    Updated: 2022/09/26 18:45:18 by hdelmas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
 
SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

OBJ = $(SRCS:.c=.o)

HEAD = includes/

CFLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJ)
		ar -rc $(NAME) $(OBJ)

.c.o:
		cc $(CFLAGS) -c -I $(HEAD) $< -o $(<:.c=.o)

all: $(NAME)

clean:
		rm -f $(OBJ) 

fclean: clean 
		rm -f $(NAME)

re :	fclean $(NAME) 

.PHONY: all clean fclean re

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/24 16:00:39 by hdelmas           #+#    #+#              #
#    Updated: 2022/09/25 12:04:12 by hdelmas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02
 
SRCS = ft_read.c \ft_putstr.c \ft_isnumber.c \input_errors.c

MAIN = main.c

$(NAME): 
		cc $(CFLAGS) -o $(NAME) $(MAIN) $(SRCS)

CFLAGS = -Wall -Wextra -Werror

all = $(NAME)
 	
fclean:
		rm -f $(NAME)

.PHONY: all clean fclean

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/22 18:26:36 by hdelmas           #+#    #+#              #
#    Updated: 2022/09/24 17:31:21 by hdelmas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = beep.a

EXE = boop
 
SRCS = ft_putchar.c\
		ft_swap.c\
		ft_putstr.c\
		ft_strlen.c\
		ft_strcmp.c\

MAIN = main.c

OBJ =  ${SRCS:.c=.o}

$(NAME): $(OBJ)
		ar -rcs $(NAME) $<
		cc $(CFLAGS) -o $(EXE)  $(MAIN) 

.c.o:
		cc $(CFLAGS) -c -I $(HEAD) $< -o ${<:.c=.o} 
CFLAGS = -Wall -Wextra -Werror

HEAD = ./includes/

all = $(NAME)

clean:
		rm -f $(OBJ) 

fclean: clean 
		rm -f $(NAME)

re :	fclean $(NAME) 

.PHONY: all clean fclean re

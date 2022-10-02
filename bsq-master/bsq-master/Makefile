# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dopeyrat <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/15 16:23:03 by dopeyrat          #+#    #+#              #
#    Updated: 2022/09/28 12:49:16 by dopeyrat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= gnl.c gnl_utils.c init_map.c main.c utils.c fast_solve.c parse_first_line.c square_utils.c

OBJS	= ${SRCS:.c=.o}

NAME	= bsq

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

all:		${NAME}

${NAME}:	${OBJS}
	${CC} ${CFLAGS} -o ${NAME} ${OBJS}

clean:
	rm -f ${OBJS}

fclean:	clean
	rm -f ${NAME}

re:	fclean all

.PHONY:	re clean fclean all

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopeyrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 12:46:55 by dopeyrat          #+#    #+#             */
/*   Updated: 2022/09/28 12:47:44 by dopeyrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	write_square(char **board, t_square *square, char c)
{
	int	i;
	int	j;

	j = 0;
	while (j < square->size)
	{
		i = 0;
		while (i < square->size)
		{
			board[square->x - i][square->y - j] = c;
			i++;
		}
		j++;
	}
}

void	change_square(t_square *square, int size, int x, int y)
{
	square->size = size;
	square->x = x;
	square->y = y;
}

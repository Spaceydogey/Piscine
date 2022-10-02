/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fast_solve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopeyrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:10:54 by dopeyrat          #+#    #+#             */
/*   Updated: 2022/09/28 13:05:56 by dopeyrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	get_first_rows(t_short **tab, t_map *map, t_square *square)
{
	int	i;

	i = 0;
	while (i < map->len)
	{
		if (map->board[0][i] == map->o)
			tab[0][i] = 0;
		else
		{
			tab[0][i] = 1;
			if (tab[0][i] > square->size)
				change_square(square, (int)tab[0][i], 0, i);
		}
		i++;
	}
}

unsigned short int	get_result(char b, t_short u, t_short l, t_short lu)
{
	if (!b)
		return (0);
	if (u <= l && u <= lu)
		return (u + 1);
	if (l <= u && l <= lu)
		return (l + 1);
	return (lu + 1);
}

void	get_result_if(t_map *map, t_short **tab, int i, int j)
{
	if (i == 0)
		tab[j][i] = get_result(map->board[j][i] - map->o,
				tab[j - 1][i], 0, 0);
	else
		tab[j][i] = get_result(map->board[j][i] - map->o, tab[j - 1][i],
				tab[j][i - 1], tab[j - 1][i - 1]);
}

int	get_biggest(t_map *map, t_short **tab, t_square *square)
{
	int	i;
	int	j;

	j = 0;
	while (++j < map->size)
	{
		i = 0;
		while (i < map->len)
		{
			get_result_if(map, tab, i, j);
			if (tab[j][i] > square->size)
			{
				square->size = (int)tab[j][i];
				square->x = j;
				square->y = i;
			}
			i++;
		}
	}
	free_tab(tab, map->size);
	write_square(map->board, square, map->f);
	free(square);
	display_map(map);
	return (0);
}

int	solve_map(t_map *map)
{
	t_short		**tab;
	int			i;
	t_square	*square;

	tab = malloc(sizeof(t_short *) * (map->size));
	if (!tab)
		return (-1);
	i = 0;
	while (i < map->size)
	{
		tab[i] = malloc(sizeof(t_short) * (map->len));
		if (!tab[i])
			return (free_tab(tab, i));
		i++;
	}
	square = malloc(sizeof(t_square));
	if (!square)
		return (free_tab(tab, map->size));
	square->x = 0;
	square->y = 0;
	square->size = 0;
	get_first_rows(tab, map, square);
	return (get_biggest(map, tab, square));
}

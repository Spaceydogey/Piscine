/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopeyrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:31:56 by dopeyrat          #+#    #+#             */
/*   Updated: 2022/09/28 12:47:58 by dopeyrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	free_map(t_map *map)
{
	int	i;

	if (!map)
		return ;
	i = 0;
	while (i < map->size)
	{
		free(map->board[i]);
		i++;
	}
	free(map->board);
	free(map);
}

void	display_map(t_map *map)
{
	int	i;

	i = 0;
	while (i < map->size)
	{
		write(1, map->board[i], map->len);
		write(1, "\n", 1);
		i++;
	}
}

t_map	*init_map_stdin(void)
{
	int		fd;
	t_map	*map;
	int		ret;
	int		i;

	fd = 0;
	map = malloc(sizeof(t_map));
	if (!map)
		return (map_error(0, fd, 0, 1));
	ret = parse_first_line(map, fd);
	if (ret == -1)
		return (map_error(map, fd, 0, 0));
	map->board = malloc(sizeof(char *) * (map->size));
	if (!map->board)
		return (map_error(map, fd, 0, 1));
	i = 0;
	ret = get_next_line(fd, map->board, map->size, &i);
	if (ret == -1 || i != map->size)
		return (map_error(map, fd, i - map->size, 0));
	return (check_map(map, fd));
}

int	main(int argc, char **argv)
{
	int		i;
	t_map	*map;

	i = 1;
	if (argc == 1)
	{
		map = init_map_stdin();
		if (map)
			solve_map(map);
		free_map(map);
	}
	if (argc > 1)
	{
		while (i < argc)
		{
			map = init_map(argv[i]);
			if (map)
				solve_map(map);
			free_map(map);
			i++;
		}
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopeyrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:41:08 by dopeyrat          #+#    #+#             */
/*   Updated: 2022/09/28 12:18:57 by dopeyrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

t_map	*map_error(t_map *map, int fd, int n, int m)
{
	int	i;

	if (map)
	{
		if (map->board)
		{
			i = 0;
			while (i < n)
			{
				free(map->board[i]);
				i++;
			}
			free(map->board);
		}
		free(map);
	}
	if (fd)
		close(fd);
	if (m == 0)
		write(2, "map error\n", 10);
	return (0);
}

int	check_line(char *line, t_map *map)
{
	int	i;

	if (ft_strlen(line) != map->len)
		return (-1);
	i = 0;
	while (line[i])
	{
		if (line[i] != map->e && line[i] != map->o)
			return (-1);
		i++;
	}
	return (0);
}

t_map	*check_map(t_map *map, int fd)
{
	int	i;
	int	ret;

	if (map->size == 0)
		return (map_error(map, fd, 0, 0));
	map->len = ft_strlen(map->board[0]);
	i = 0;
	while (i < map->size)
	{
		ret = check_line(map->board[i], map);
		if (ret == -1)
			return (map_error(map, fd, map->size, 0));
		i++;
	}
	close(fd);
	return (map);
}

t_map	*init_map(char *str)
{
	int		fd;
	t_map	*map;
	int		ret;
	int		i;

	fd = open(str, O_RDONLY);
	if (fd == -1)
		return (map_error(0, 0, 0, 0));
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
		return (map_error(map, fd, i, 0));
	return (check_map(map, fd));
}

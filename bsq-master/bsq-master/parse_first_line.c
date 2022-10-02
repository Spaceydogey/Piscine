/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_first_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopeyrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 10:50:58 by dopeyrat          #+#    #+#             */
/*   Updated: 2022/09/28 12:17:11 by dopeyrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*get_first_line(int fd)
{
	char	*line;
	char	buff[1];
	int		ret;

	ret = 1;
	line = ft_strdup("");
	if (!line)
		return (0);
	while (ret)
	{
		ret = read(fd, buff, 1);
		if (ret == -1 || ret == 0)
		{
			free(line);
			return (0);
		}
		if (buff[0] == '\n')
			return (line);
		line = ft_strncat_f(line, buff, 1);
		if (!line)
			return (0);
	}
	free(line);
	return (0);
}

int	parse_first_line2(t_map *map, int i, char *line)
{
	int	j;

	j = 0;
	map->size = 0;
	while (j < i && line[j] >= '0' && line[j] <= '9')
	{
		map->size = (map->size * 10) + (line[j] - 48);
		j++;
	}
	free(line);
	if (j != i || !ft_isprint_char(map->f) || !ft_isprint_char(map->o)
		|| !ft_isprint_char(map->e))
		return (-1);
	if (map->f == map->o || map->f == map->e || map->o == map->e)
		return (-1);
	return (0);
}

int	parse_first_line(t_map *map, int fd)
{
	char	*line;
	int		i;

	line = get_first_line(fd);
	if (!line)
		return (-1);
	i = 0;
	while (line[i])
		i++;
	if (i < 4)
	{
		free(line);
		return (-1);
	}
	i--;
	map->f = line[i];
	i--;
	map->o = line[i];
	i--;
	map->e = line[i];
	return (parse_first_line2(map, i, line));
}

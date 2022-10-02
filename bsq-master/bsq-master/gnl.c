/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopeyrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 09:43:42 by dopeyrat          #+#    #+#             */
/*   Updated: 2022/09/27 10:50:35 by dopeyrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_read(int fd, char **leftover)
{
	int		ret;
	char	buffer[8193];
	char	*old_leftover;

	old_leftover = *leftover;
	ret = read(fd, buffer, 8192);
	if (ret == -1)
		return (ft_error(*leftover));
	buffer[ret] = 0;
	*leftover = ft_strjoin(*leftover, buffer);
	if (!(*leftover))
		return (ft_error(old_leftover));
	free(old_leftover);
	return (ret);
}

int	ft_end_text(char *leftover, int fd)
{
	char	*buffer[1];
	int		ret;

	ret = read(fd, buffer, 1);
	if (ret != 0)
		return (ft_error(leftover));
	if (leftover)
		if (leftover[0] != 0)
			return (ft_error(leftover));
	free(leftover);
	return (0);
}

int	ft_newline_found(char **line, char *str, char **leftover, int *i)
{
	char	*temp;

	str[0] = 0;
	temp = *leftover;
	line[*i] = ft_strdup(*leftover);
	if (!line[*i])
		return (ft_error(*leftover));
	(*i)++;
	*leftover = ft_strdup(&str[1]);
	if (!(*leftover))
		return (ft_error(temp));
	free(temp);
	return (0);
}

int	init_gnl(char **leftover)
{
	*leftover = ft_strdup("");
	if (!(*leftover))
		return (-1);
	return (8192);
}

int	get_next_line(int fd, char **line, int size, int *i)
{
	char	*str;
	char	*leftover;
	int		ret;

	ret = init_gnl(&leftover);
	while (ret != -1)
	{
		str = leftover;
		while (*str || ret < 8192)
		{
			if (*str == '\n')
			{
				if (ft_newline_found(line, str, &leftover, i) == -1)
					return (-1);
				str = leftover;
			}
			else if ((*str == 0 || ret == 0) || *i == size)
				return (ft_end_text(leftover, fd));
			str++;
		}
		ret = ft_read(fd, &leftover);
		if (ret == -1)
			return (ft_error(leftover));
	}
	return (-1);
}

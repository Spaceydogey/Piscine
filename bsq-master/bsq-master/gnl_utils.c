/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopeyrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:17:26 by dopeyrat          #+#    #+#             */
/*   Updated: 2022/09/27 10:50:26 by dopeyrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*ft_strdup(char *str)
{
	char	*dup;
	int		i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	dup = malloc(sizeof(char) * (i + 1));
	if (!dup)
		return (0);
	i = 0;
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = 0;
	return (dup);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*join;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	join = malloc(sizeof(char) * (j + i + 1));
	if (!join)
		return (0);
	i = -1;
	j = -1;
	while (s1[++i])
		join[i] = s1[i];
	while (s2[++j])
		join[i + j] = s2[j];
	join[i + j] = 0;
	return (join);
}

int	ft_error(char *leftover)
{
	free(leftover);
	return (-1);
}

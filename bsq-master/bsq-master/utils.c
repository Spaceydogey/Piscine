/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopeyrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:30:07 by dopeyrat          #+#    #+#             */
/*   Updated: 2022/09/27 10:31:17 by dopeyrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*ft_strncat_f2(char *str, char *buff, int n, char *dst)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		dst[i] = str[i];
		i++;
	}
	j = 0;
	while (j < n)
	{
		dst[i + j] = buff[j];
		j++;
	}
	dst[i + j] = 0;
	free(str);
	return (dst);
}

char	*ft_strncat_f(char *str, char *buff, int n)
{
	int		i;
	char	*dst;

	i = 0;
	while (str[i])
		i++;
	dst = malloc(sizeof(char) * (i + n + 1));
	if (!dst)
	{
		free(str);
		return (0);
	}
	return (ft_strncat_f2(str, buff, n, dst));
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_isprint_char(char c)
{
	if (c > 126 || c < 32)
		return (0);
	return (1);
}

int	free_tab(unsigned short int **tab, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (-1);
}

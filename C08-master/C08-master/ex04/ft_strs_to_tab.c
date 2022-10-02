/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 14:57:25 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/23 08:49:01 by hdelmas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		src_len;
	char	*dest;

	if (!src)
		return (0);
	i = 0;
	dest = NULL;
	src_len = ft_strlen(src);
	dest = malloc(sizeof(char) * (src_len + 1));
	if (!dest)
		return (0);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	free_all_copy(t_stock_str *tab, int i)
{	
	int	j;

	j = 0;
	while (j <= i)
	{
		free(tab[j].copy);
		j++;
	}
	free(tab);
	return ;
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*res;	

	i = 0;
	res = malloc(sizeof(t_stock_str) * ac + 1));
	if (!res)
		return (NULL);
	while (i < ac)
	{
		res[i].size = ft_strlen(av[i]);
		res[i].str = av[i];
		res[i].copy = ft_strdup(av[i]);
		if (!res[i].copy)
		{
			free_all_copy(res, i);
			return (NULL);
		}
		i++;
	}
	res[i].str = 0;
	return (res);
}

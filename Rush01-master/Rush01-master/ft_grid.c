/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 11:18:35 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/18 17:02:18 by hdelmas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	**ft_grid(int len)
{
	int	**tab;
	int	i;

	i = 0;
	tab = NULL;
	if (len <= 0)
		return (0);
	tab = malloc(sizeof(tab) * len + 1);
	if (tab == NULL)
		return (0);
	while (i < len)
	{
		tab[i] = NULL;
		tab[i] = malloc(sizeof(tab[i]) * len + 1);
		if (tab[i] == NULL)
			return (0);
		i++;
	}
	return (tab);
}

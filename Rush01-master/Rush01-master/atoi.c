/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 14:55:53 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/18 14:50:16 by hdelmas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	str_is_alpha(char str)
{
	if (str >= 48 && str <= 57)
		return (1);
	else
		return (0);
}

int	*ft_atoi(char *str, int size)
{	
	int	i;
	int	k;
	int	*res;

	res = NULL;
	res = malloc(sizeof(res) * size);
	if (!res)
		return (0);
	i = 0;
	k = 0;
	if (str_is_alpha(str[i]) == 0)
		return (0);
	while (str[i] != '\0')
	{
		if (str_is_alpha(str[i]) == 1)
		{
			res[k] = str[i] - 48;
			k++;
		}
		i++;
	}
	return (res);
}

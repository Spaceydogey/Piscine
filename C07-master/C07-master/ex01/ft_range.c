/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 12:30:01 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/18 10:25:06 by hdelmas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_range_len(int min, int max)
{
	int			len;
	long int	sv_max;
	long int	sv_min;

	sv_max = max;
	sv_min = min;
	len = sv_max - sv_min;
	if (len < 0)
		len = -1 * len;
	return (len);
}

int	*ft_range(int min, int max)
{
	int	range_len;
	int	*dest;
	int	nbr;
	int	i;

	dest = NULL;
	if (min >= max)
		return (0);
	range_len = ft_range_len(min, max) - 1;
	dest = malloc(sizeof(dest) * range_len);
	if (dest == NULL)
		return (0);
	nbr = min;
	i = 0;
	while (nbr < max)
	{
		dest[i] = nbr;
		nbr++;
		i++;
	}
	return (dest);
}
/*#include <stdio.h>
int	main()
{
	int min = -20;
	int max = -1;
	int i = 0;
	int len = 19;
	int *dest = ft_range(min,max);
	while (i < len)
	{
		printf("%d\n",	dest[i]);
		i++;
	}
	free(dest);
	dest = NULL;
}*/

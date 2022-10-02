/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:57:57 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/28 11:41:16 by hdelmas          ###   ########.fr       */
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

int	ft_ultimate_range(int **range, int min, int max)
{
	int	range_len;
	int	i;

	range[0] = NULL;
	if (min >= max)
		return (0);
	range_len = ft_range_len(min, max);
	range[0] = malloc(sizeof(range[0]) * range_len);
	if (*range == NULL)
		return (-1);
	i = -1;
	while (min + (++i) < max)
	{
		range[0][i] = min + i;
	}
	return (range_len);
}
/*
#include <stdio.h>
int	main()
{
	int min = 1;
	int max = 1;
	int i = -1;
	int **range;
	int *ref;
	range = &ref;
	int size  = ft_ultimate_range(range, min, max);
	printf("%d\n",  size);
	while (++i < size)
	{
		printf("%d\n",range[0][i]);
	}
}*/

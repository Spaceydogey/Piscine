/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:57:57 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/22 08:52:47 by hdelmas          ###   ########.fr       */
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
	int	nbr;
	int	i;

	if (min >= max)
		return (0);
	range_len = ft_range_len(min, max);
	range[0] = malloc(sizeof(range[0]) * range_len);
	if (*range == NULL)
		return (-1);
	nbr = min;
	i = 0;
	while (nbr < max)
	{
		range[0][i] = nbr;
		nbr++;
		i++;
	}
	return (range_len);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	int min = 0;
	int max = 2147483647;
	int i = 0;
	int **range;
	int *ref;
	(void) argc;
	(void) argv;
	range = &ref;
	int size  = ft_ultimate_range(range, min, max);
	printf("%d\n",  size);
	while (i < size)
	{
		printf("%d\n",range[0][i]);
		i++;
	}
}*/

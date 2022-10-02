/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 09:51:56 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/15 11:56:25 by hdelmas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long int	sqrt;

	sqrt = 0;
	if (nb <= 0)
		return (0);
	while (sqrt * sqrt < 2147483647)
	{
		if (sqrt * sqrt == nb)
			return (sqrt);
		sqrt++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_sqrt(2147395600));
}*/

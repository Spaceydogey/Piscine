/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:57:30 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/15 16:40:30 by hdelmas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 1 || nb == 0)
		return (0);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}	
	return (1);
}
/*
#include <stdio.h>
int	main()
{	int i = -1; 
	while (i++ < 1500)
	{	if (ft_is_prime(i))
			printf("%d, %d\n",i,ft_is_prime(i));
	}
}*/

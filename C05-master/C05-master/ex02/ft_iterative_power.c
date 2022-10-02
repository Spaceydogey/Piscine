/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 08:45:10 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/15 09:17:37 by hdelmas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	if (power <= 0)
		return (0);
	while (i <= power)
	{
		res = res * nb;
		i++;
	}
	return (res);
}
/*#include <stdio.h>
int	main()
{
	printf("%d\n",ft_iterative_power(0,0));
	printf("%d\n",ft_iterative_power(1,1));
	printf("%d\n",ft_iterative_power(-1,6));
	printf("%d\n",ft_iterative_power(2,8));
	printf("%d\n",ft_iterative_power(6,2));
}*/

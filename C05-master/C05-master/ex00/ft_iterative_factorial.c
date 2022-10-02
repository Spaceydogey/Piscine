/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fit_iterative_factorial.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 08:03:29 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/15 08:31:05 by hdelmas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
			res = res * nb;
			nb--;
	}
	return (res);
}
/*#include <stdio.h>
int	main()
{
	printf("%d\n",ft_iterative_factorial(-3));
	printf("%d\n",ft_iterative_factorial(-2));
	printf("%d\n",ft_iterative_factorial(-1));
	printf("%d\n",ft_iterative_factorial(0));
	printf("%d\n",ft_iterative_factorial(1));
	printf("%d\n",ft_iterative_factorial(2));
	printf("%d\n",ft_iterative_factorial(3));
	printf("%d\n",ft_iterative_factorial(4));
	printf("%d\n",ft_iterative_factorial(5));
}*/

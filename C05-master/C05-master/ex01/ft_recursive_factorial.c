/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 08:26:41 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/15 08:43:47 by hdelmas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	nb = nb * ft_recursive_factorial(nb - 1);
	return (nb);
}
/*#include <stdio.h>
int	main()
{
	printf("%d\n",ft_recursive_factorial(-3));
	printf("%d\n",ft_recursive_factorial(-2));
	printf("%d\n",ft_recursive_factorial(-1));
	printf("%d\n",ft_recursive_factorial(0));
	printf("%d\n",ft_recursive_factorial(1));
	printf("%d\n",ft_recursive_factorial(2));
	printf("%d\n",ft_recursive_factorial(3));
	printf("%d\n",ft_recursive_factorial(4));
	printf("%d\n",ft_recursive_factorial(5));
}*/

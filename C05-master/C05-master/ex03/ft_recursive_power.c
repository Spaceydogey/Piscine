/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 09:18:31 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/15 09:27:57 by hdelmas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power <= 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*#include <stdio.h>
int	main()
{
	printf("%d\n",ft_recursive_power(0,0));
	printf("%d\n",ft_recursive_power(1,1));
	printf("%d\n",ft_recursive_power(-1,6));
	printf("%d\n",ft_recursive_power(2,8));
	printf("%d\n",ft_recursive_power(6,2));
}*/

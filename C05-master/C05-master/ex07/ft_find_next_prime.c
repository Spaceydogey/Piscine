/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:32:02 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/15 17:27:37 by hdelmas          ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 1)
		return (nb);
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}
/*#include <stdio.h>
int	main()
{			
	printf("%d\n",ft_find_next_prime(2147483646));
	printf("%d\n",ft_find_next_prime(0));
	printf("%d\n",ft_find_next_prime(100));
}		
*/

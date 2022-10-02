/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 14:00:15 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/10 15:49:13 by hdelmas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_triwrite(int a, int b, int c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	trivar[3];

	trivar[0] = 48;
	while (trivar[0] <= 55)
	{
		trivar[1] = trivar[0] + 1;
		while (trivar[1] <= 56)
		{
			trivar[2] = trivar[1] + 1;
			while (trivar[2] <= 57)
			{
				ft_triwrite(trivar[0], trivar[1], trivar[2]);
				if (trivar[0] != 55)
				{
					write(1, ", ", 2);
				}
				trivar[2]++;
			}
			trivar[1]++;
		}
		trivar[0]++;
	}
}
/*
int	main()
{
	ft_print_comb();
}*/

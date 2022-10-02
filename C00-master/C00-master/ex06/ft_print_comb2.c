/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 16:04:06 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/13 11:25:57 by hdelmas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	double_write(int a, int b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void	quad_writef(int a, int b, int c, int d)
{
	double_write(a, b);
	write(1, " ", 1);
	double_write(c, d);
	if (a == 57 && b == 56)
	{
		return ;
	}
	else
	{
		write(1, ", ", 2);
	}
}

void	ft_count(int c, int d, int e, int f)
{
	while (e <= 57)
	{	
		f = 48;
		c = e;
		while (f <= 57)
		{	
			d = f + 1;
			while (c <= 57)
			{
				while (d <= 57)
				{
					quad_writef(e, f, c, d);
					d++;
				}
				d = 48;
				c++;
			}
			c = e;
			f++;
		}
		e++;
	}	
}

void	ft_print_comb2(void)
{
	ft_count(48, 49, 48, 48);
}
/*
int	main()
{	
	ft_print_comb2();
}*/

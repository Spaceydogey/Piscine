/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 10:03:41 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/10 11:51:11 by hdelmas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	line;
	int	col;

	line = 1;
	while ( line <= y)
	{	
		col = 1;
		if (line == 1 || line == y)
		{
			while (col <= x)
			{
				if (col == 1)
				{
					ft_putchar('A');
				}
				else if (col == x)
				{
					ft_putchar('C');
				}
				else
				{
					ft_putchar('B');
				
				}
				col++;	
			}
		}
		else
		{
				while (col <= x)
			{
				if (col == 1)
				{
					ft_putchar('B');
				}
				else if (col == x)
				{
					ft_putchar('B');
				}
				else
				{
					ft_putchar(' ');

				}

				col++;
			}
		}
		line++;
		ft_putchar('\n');
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main()
{
	rush(0, 0);
}

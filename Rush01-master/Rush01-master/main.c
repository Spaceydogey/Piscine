/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 11:45:10 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/18 17:11:04 by hdelmas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>

int		**ft_grid(int len);
int		*ft_atoi(char *str, int size);
void	ft_41_col(int **grid, int *input, int len);
void	ft_41_line(int **grid, int *input, int len);

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	**grid;
	int	*input;

	(void) argc;
	input = ft_atoi(argv[1], 16);
	grid = ft_grid(4);
	ft_41_line(grid, input, 4);
	ft_41_col(grid, input, 4);
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			grid[j][i] += 48;
			write(1, &grid[j][i], 1);
			write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

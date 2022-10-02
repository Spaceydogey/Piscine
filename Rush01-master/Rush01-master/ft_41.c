/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_41.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 15:53:13 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/18 17:10:30 by hdelmas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_41_line(int **grid, int *input, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 3)
	{
		j = 0;
		if (input[i] == len && input[i + len] == 1)
		{
			while (j < len)
			{
				grid[i][j] = j + 1;
				j++;
			}
		}
		if (input[i + len] == len && input[i] == 1)
		{	
			while (j < len)
			{
				grid[i][j] = 4 - j;
				j++;
			}
		}
		i++;
	}
}

void	ft_41_col(int **grid, int *input, int len)
{
	int	j;
	int	i;

	j = 0;
	while (j <= 3)
	{
		i = 0;
		if (input[j + 8] == len && input[j + 8 + len] == 1)
		{
			while (i < len)
			{
				grid[i][j] = i + 1;
				i++;
			}
		}
		if (input[j + len + 8] == len && input[j + 8] == 1)
		{
			while (i < len)
			{
				grid[i][j] = 4 - i;
				i++;
			}
		}
		j++;
	}
}

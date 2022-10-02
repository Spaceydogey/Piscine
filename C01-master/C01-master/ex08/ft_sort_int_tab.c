/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 17:20:13 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/12 12:34:57 by hdelmas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{	
	int	i;
	int	val_save;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			val_save = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = val_save;
			i = 0;
		}
		else
			i++;
	}
}
/*
int	main()
{	int tab[5] = {-2, -0, -1, 0, 5};
	ft_sort_int_tab(tab, 5);
	int j =0;

	while (j < 5)
	{
		printf("%d", tab[j]);
		j++;
	}
}*/

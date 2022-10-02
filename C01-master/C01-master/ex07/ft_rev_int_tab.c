/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 16:03:55 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/13 11:27:36 by hdelmas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	addr_save;

	i = 0;
	while (i < size / 2)
	{
		addr_save = tab[size - 1 - i];
		tab[size - 1 - i] = tab[i];
		tab[i] = addr_save;
		i++;
	}
}
/*int	main()
{	int tab[5] = {1, 2, 3, 4, 5};
	ft_rev_int_tab(tab, 5);
	int j =0;

	while (j < 5)
	{
		printf("%d", tab[j]);
		j++;
	}
}*/

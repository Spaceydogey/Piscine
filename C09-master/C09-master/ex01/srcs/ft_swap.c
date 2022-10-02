/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 11:24:19 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/13 09:29:05 by hdelmas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b)
{
	int	addr_save;

	addr_save = *a;
	*a = *b;
	*b = addr_save;
}
/*
int	main()
{	
	int	var1 = 48;
	int	var2 =49;

	int *a = &var1;
	int *b = &var2;
	write(1, a, 1);
	write(1, b, 1);
	ft_swap(a, b);
	write(1, a, 1);
	write(1, b, 1);
}
*/

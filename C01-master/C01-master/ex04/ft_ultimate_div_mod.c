/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 13:55:38 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/11 15:15:23 by hdelmas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{	
	int	save_a;
	int	save_b;
	int	div;
	int	mod;

	save_a = *a;
	save_b = *b;
	div = save_a / save_b;
	mod = save_a % save_b;
	*a = div;
	*b = mod;
}
/*
int	main()
{
	int *a;
	int *b;
	int var1 = 15;
	int var2 = 10;
	a = &var1;
	b = &var2;
	ft_ultimate_div_mod(a, b);
	printf("%d,%d", *a, *b);
}*/

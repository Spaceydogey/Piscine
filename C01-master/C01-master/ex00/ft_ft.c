/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 10:19:50 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/11 10:27:41 by hdelmas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
int	main()
{	
	int var = 56;
	int	*nbr;
	nbr = &var;
	write(1, nbr, 1);
	ft_ft( nbr);
	write(1, nbr, 1);
}*/

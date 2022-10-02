/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 10:53:12 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/18 16:28:28 by hdelmas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putnbrpos(int nb)
{
	if (nb < 10)
	{
		nb = nb + '0';
		write(1, &nb, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void	ft_putnbrneg(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		ft_putnbr(147483648);
	}
	else
	{
		if (nb > -10)
		{
			nb = '0' - nb;
			write(1, "-", 1);
			write(1, &nb, 1);
		}
		else
		{
			ft_putnbr(nb / 10);
			ft_putnbr(-nb % 10);
		}
	}
}

void	ft_putnbr(int nb)
{
	if (nb >= 0)
	{
		ft_putnbrpos(nb);
	}
	else
	{
		ft_putnbrneg(nb);
	}
}
/*
int	main()
{
	ft_putnbr(-155);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 10:40:33 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/18 16:27:30 by hdelmas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);

int	ft_strlen(char *str)
{
	int	str_size;

	str_size = 0;
	while (*str != '\0')
	{
		str_size++;
		str++;
	}
	return (str_size);
}

int	ft_condititon(int base_len, char *base)
{	
	int	i;
	int	j;

	if (base_len <= 1)
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == 45 || base[i] == 43 || base[i] < 33)
			return (0);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbrpos(int nb, int base_len, char *base)
{
	if (nb < base_len)
		write(1, &base[nb], 1);
	else
	{
		ft_putnbr_base(nb / base_len, base);
		ft_putnbr_base(nb % base_len, base);
	}
}

void	ft_putnbrneg(int nb, int base_len, char *base)
{
	if (nb > -base_len)
	{
		write(1, "-", 1);
		write(1, &base[-nb], 1);
	}
	else
	{
		ft_putnbr_base(nb / base_len, base);
		ft_putnbr_base(-nb % base_len, base);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	base_len = ft_strlen(base);
	if (ft_condititon(base_len, base) == 0)
		return ;
	if (nbr < 0)
		ft_putnbrneg(nbr, base_len, base);
	else
		ft_putnbrpos(nbr, base_len, base);
}
/*
int	main()
{
	ft_putnbr_base(-14, "poneyvif");
}*/

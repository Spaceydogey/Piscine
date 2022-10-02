/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:39:24 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/18 16:28:08 by hdelmas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ten_power_of(int i)
{	
	int	res;

	res = 1;
	while (i > 0)
	{
		res = res * 10;
		i--;
	}
	return (res);
}

int	ft_ascii_to_int(char *str, int i, int j, int sign)
{
	int	nbr;
	int	digit;

	nbr = 0;
	while (i >= j)
	{
		digit = *str - 48;
		if (sign == 1)
			nbr = nbr + digit * ten_power_of(i - j);
		else
			nbr = nbr - digit * ten_power_of(i - j);
		j++;
		str++;
	}
	return (nbr);
}

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	sign;

	i = 0;
	sign = 1;
	while (str[i] == 32 || str[i] == '\n' || str[i] == '\f'
		|| str[i] == '\t' || str[i] == '\v' || str[i] == '\r')
			i++;
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			sign = sign * -1;
		i++;
	}
	j = i;
	while (str[i] <= 57 && str[i] >= 48)
		i++;
	i = i - 1;
	return (ft_ascii_to_int(&str[j], i, j, sign));
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main()
{
	char s[] ="  	--+-+--125op563";
	printf("%d\n",ft_atoi(s));
}*/

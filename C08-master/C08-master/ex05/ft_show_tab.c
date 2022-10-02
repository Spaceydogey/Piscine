/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:19:11 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/24 14:42:40 by hdelmas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"
#include <unistd.h>

t_stock_str	*ft_strs_to_tab(int ac, char **av);

void	ft_putnbr(int nb)
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

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		i++;
	}
}

#include <stdlib.h>
int	main()
{
	char		**strs;
	int			ac = 5;
	t_stock_str	*tab;
	strs = malloc(sizeof(char**) * (ac + 1));
	if (!strs)
		return (0);
	strs[0] = "hello";
	strs[1] = "0123456789";
	strs[2] = "boop";
	strs[3] = "felix";
	strs[4] = "oi";

	tab = ft_strs_to_tab(ac, strs);
	ft_show_tab(tab);
}

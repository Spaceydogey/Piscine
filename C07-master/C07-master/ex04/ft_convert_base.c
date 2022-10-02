/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:15:36 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/24 12:30:55 by hdelmas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int		ft_atoi_base(char *str, char *base);
void	ft_putnbr_base(int nbr, char *base);
int		ft_condititon(char *base);

char	*ft_putnbr(long int nb, char *base, int len, char *nb_out)
{	
	int	j;
	int	end;
	int	base_len;

	base_len = 0;
	while (base[base_len])
		base_len++;
	j = len;
	end = 0;
	if (nb < 0)
	{
		nb_out[0] = 45;
		nb = -nb;
		end = 1;
	}
	while (--j >= end)
	{
		if ((nb >= base_len))
		{
			nb_out[j] = base[nb % base_len];
			nb = nb / base_len;
		}
	}
	nb_out[j + 1] = base[nb];
	return (nb_out);
}

char	*ft_nbr_to_base(int nbr, char *base)
{
	int			base_len;
	int			nb_conv_len;
	long int	nb;
	char		*nb_conv;
	int			i;

	nb = nbr;
	nb_conv = NULL;
	base_len = 0;
	while (base[base_len] != '\0')
		base_len++;
	if (ft_condititon(base) == 0)
		return (NULL);
	nb_conv_len = 1;
	i = nb;
	if (nb < 0)
	{
		nb_conv_len = 2;
		i = -i;
	}	
	while (i > base_len)
	{
		i = i / base_len;
		nb_conv_len++;
	}
	nb_conv = malloc(sizeof(char *) * (nb_conv_len + 1));
	if (!nb_conv)
		return (NULL);
	nb_conv[nb_conv_len] = '\0';
	ft_putnbr(nb, base, nb_conv_len, nb_conv);
	return (nb_conv);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	nbr_decimal;

	nbr_decimal = ft_atoi_base(nbr, base_from);
	return (ft_nbr_to_base(nbr_decimal, base_to));
}

#include <stdio.h>
int	main()
{
	char *out = ft_convert_base("-200","0123456789","0123456789");
	printf("out > %s\n", out);
	free(out);
}

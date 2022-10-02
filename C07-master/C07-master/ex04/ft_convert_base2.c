/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:15:31 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/20 13:48:56 by hdelmas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_convert_base(char *nbr, char *base_from, char *base_to);

int	ft_strstr(char *str, char to_find)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] == to_find)
			return (j);
		j++;
	}
	return (-1);
}

int	ft_condititon(char *base)
{
	int	i;
	int	j;
	int	base_len;

	base_len = 0;
	if (!base)
		return (0);
	while (base[base_len] != '\0')
		base_len++;
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

int	ft_base_to_int(char *str, int i, int j, char *base)
{
	int	nbr;
	int	base_len;

	nbr = 0;
	base_len = 0;
	while (base[base_len] != '\0')
		base_len++;
	while (j < i)
	{
		nbr = ((nbr + ft_strstr(base, str[j])) * base_len);
		j++;
	}
	nbr = nbr + ft_strstr(base, str[j]);
	return (nbr);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	j;
	int	sign;

	i = 0;
	sign = 1;
	if (ft_condititon(base) == 0)
		return (0);
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
	while (ft_strstr(base, str[i]) != -1)
		i++;
	i = i - 1;
	return (sign * ft_base_to_int(str, i, j, base));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 08:53:22 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/28 17:29:13 by hdelmas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	sep_print(int k, char *sep, char *strjoin)
{
	int	j;

	j = 0;
	while (sep[j])
	{
		strjoin[k] = sep[j];
		k++;
		j++;
	}
	return (k);
}

char	*str_print(char *sep, char **strs, char *strjoin, int size)
{
	int	i;
	int	j;
	int	k;
	int	len_join;

	len_join = 0;
	i = 0;
	k = 0;
	while (i < size)
	{
		len_join = len_join + ft_strlen(strs[i]);
		i++;
	}
	while (--i >= 0)
		len_join += ft_strlen(sep);
	printf("len_join > %d\n", len_join);
	strjoin = malloc(sizeof(char) * (len_join + 1));
	if (!strjoin)
		return (0);
	i = 0;
	while (i < size)
	{	
		j = 0;
		while (strs[i][j] && k < len_join)
		{
			strjoin[k] = strs[i][j];
			j++;
			k++;
		}
		if (i == size - 1 || k == len_join)
			return (strjoin);
		k = sep_print(k, sep, strjoin);
		i++;
	}
	strjoin[len_join] = 0;
	return (0);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*strjoin;
	int		i;
	int		len_join;

	len_join = 0;
	strjoin = NULL;
	if (size <= 0)
	{
		strjoin = malloc(sizeof(char));
		if (!strjoin)
			return (0);
		strjoin[0] = '\0';
		return (strjoin);
	}
	i = 0;
/*	while (i < size)
	{	
		len_join = len_join + ft_strlen(strs[i]);
		i++;
	}
	while (i > 0)
	{
		len_join += ft_strlen(sep);
		i--;
	}
	printf("len_join > %d\n", len_join);
	strjoin = malloc(sizeof(char) * (len_join + 1));
	if (!strjoin)
		return (0);*/

	return (str_print(sep, strs, strjoin, size));
}

#include <stdio.h>
int	main()
{
	char *strs[4];
	strs[0] = "1";
	strs[1] = "2";
	strs[2] = "3";
	strs[3] = "4";
	char *sep = "|";
	int size = 4;
	char *test = ft_strjoin(size,strs,sep);
	printf("%s\n",test);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 08:53:22 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/24 11:02:45 by hdelmas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

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
	while (sep[j] != '\0')
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

	i = 0;
	k = 0;
	while (i < size)
	{	
		j = 0;
		while (strs[i][j] != '\0')
		{
			strjoin[k] = strs[i][j];
			j++;
			k++;
		}
		if (i == size - 1)
			return (strjoin);
		k = sep_print(k, sep, strjoin);
		i++;
	}
	return (0);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*strjoin;
	int		i;
	int		len_join;

	i = 0;
	len_join = ft_strlen(sep);
	strjoin = NULL;
	if (size == 0)
	{
		strjoin = malloc(sizeof(strjoin) * size);
		if (!strjoin)
			return (0);
		strjoin = "";
		return (strjoin);
	}
	while (i < size)
	{	
		len_join = len_join + ft_strlen(strs[i]);
		i++;
	}
	strjoin = malloc(sizeof(strjoin) * len_join);
	if (!strjoin)
		return (0);
	return (str_print(sep, strs, strjoin, size));
}
/*
#include <stdio.h>
int	main()
{
	char **strs;
	strs = NULL;
	strs = malloc(sizeof(strs) * 1);
	if (strs == NULL)
		return(0);
	strs[0] = "hello";
	char *sep = "//";
	int size = 1;
	printf("%s",ft_strjoin(size,strs,sep));
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:13:32 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/28 19:42:32 by hdelmas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

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

char	*ft_strjoin_init(int size, char **strs, char *sep)
{
	int		join_len;
	int		i;
	char	*ret;

	i = -1;
	join_len = 0;
	while (++i < size)
		join_len += ft_strlen(strs[i]);
	join_len += (ft_strlen(sep) * (size - 1));
	ret = malloc(sizeof(char) * (join_len + 1));
	if (!ret)
		return (0);
	return (ret);
}

void	ft_add(char *ret, char *strs, int j)
{
	int	i;

	i = -1;
	while (strs[++i])
	{
		ret[j] = strs[i];
		j++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ret;
	int		i;
	int		j;

	if (size <= 0)
	{
		ret = malloc(sizeof(char));
		ret[0] = '\0';
		return (ret);
	}
	ret = ft_strjoin_init(size, strs, sep);
	i = -1;
	j = 0;
	while (++i < size)
	{
		ft_add(ret, strs[i], j);
		j += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_add(ret, sep, j);
			j += ft_strlen(sep);
		}
	}
	ret[j] = 0;
	return (ret);
}
/*
#include <stdio.h>
int	main()
{
	char *strs[4];
	strs[0] = "hello";
	strs[1] = "me llamo";
	strs[2] = "yes";
	strs[3] = "puta";
	char *sep = ",";
	int size = 4;
	char *test = ft_strjoin(size,strs,sep);
	printf("%s\n",test);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 17:30:01 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/28 19:02:17 by hdelmas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_nb_word(int size, char **strs)
{
	int	i;

	i = 0;
	while (i < size && strs[i][0])
		i++;
	return (i);
}

int	ft_words_size(int size, char **strs)
{
	int	i;
	int	ret;
	int	k;

	i = 0;
	ret = 0;
	while (i < size && strs[i][0])
	{
		k = -1;
		while (strs[i][++k])
			ret++;
		i++;
	}
	return (ret);
}

int	ft_strjoin_init(int size, char **strs, char *sep)
{
	int	nb_word;
	int	nb_sep;
	int	sep_size;
	int	words_size;

	nb_word = ft_nb_word(size, strs);
	nb_sep = nb_word - 1;
	sep_size = 0;
	while (sep[sep_size])
		sep_size++;
	words_size = ft_words_size(size, strs);
	return (words_size + sep_size * nb_sep);
}

char	*put_str(char **strs, int size, int join_size, char *sep)
{
	int		i;
	int		k;
	int		j;
	char	*ret;

	i = -1;
	k = 0;
	ret = 0;
	while (++i < size && join_size > 0)
	{
		j = -1;
		while (strs[i][++j])
		{
			ret[k] = strs[i][j];
			k++;
		}
		j = -1;
		while (sep[++j] && k < join_size)
		{
			ret[k] = sep[j];
			k++;
		}
	}
	ret[join_size] = 0;
	return (ret);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ret;
	int		join_size;

	join_size = ft_strjoin_init(size, strs, sep);
	printf("join_size > %d\n", join_size);
	if (join_size < 0)
		join_size = 0;
	printf("join_size > %d\n", join_size);
	ret = malloc(sizeof(char) * (join_size + 1));
	if (!ret)
		return (0);
	ret = put_str(strs, size, join_size, sep);
	return (ret);
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
	int size = -21;
	char *test = ft_strjoin(size,strs,sep);
	printf("%s\n",test);
	free(test);
}

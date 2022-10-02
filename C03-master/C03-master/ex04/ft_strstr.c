/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:53:00 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/14 08:22:15 by hdelmas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

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

char	*ft_strstr(char *str, char *to_find)
{	
	int	len_to_find;
	int	i;
	int	j;

	i = 0;
	len_to_find = ft_strlen(to_find);
	if (len_to_find == 0)
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0')
		{
			if (str[i + j] == to_find[j])
			{
				if (j == len_to_find - 1)
					return (&str[i]);
				j++;
			}
			else
				break ;
		}
		i++;
	}
	return (NULL);
}
/*
#include <string.h>
int	main()
{
	char dest[] ="beepboop";
	char src[] ="boop";

	printf("%s \n",ft_strstr(dest,src));
	printf("%s \n", strstr(dest,src));
}
*/

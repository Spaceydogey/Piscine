/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 08:26:07 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/14 15:52:33 by hdelmas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	str_size;

	str_size = 0;
	while (*str != '\0')
	{
		str_size++;
		str++;
	}
	return (str_size);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{	
	unsigned int	i;
	unsigned int	len_src;

	len_src = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (len_src);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len_src);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char dest[10];
	char dest2[10];
	char *src = "oi";
	char *src2 = "oi";
	printf("%lu\n", strlcpy(dest2, src2, 6));
	printf("%u\n", ft_strlcpy(dest, src, 6));
	printf("%s\n",dest2);
	printf("%s\n", dest);
}*/
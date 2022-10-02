/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:30:53 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/13 16:39:09 by hdelmas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				len_dest;
	unsigned int	i;

	i = 0;
	len_dest = ft_strlen(dest);
	while (src[i] != '\0' && i < nb)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char dest[25] ="Hello ";
	char dest2[25] ="Hello ";
	char src[] ="world";
	char src2[] ="world";

	printf("%s \n",ft_strncat(dest,src,5));
	printf("%s \n", strncat(dest2,src2,5));
}
*/

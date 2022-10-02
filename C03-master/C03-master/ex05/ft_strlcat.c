/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 09:31:40 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/15 15:01:51 by hdelmas          ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_src;
	unsigned int	len_dest;
	unsigned int	i;
	unsigned int	j;

	len_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	i = len_dest;
	j = 0;
	if (size <= len_dest)
		return (len_src + size);
	while (src[j] != '\0' && i < size - 1)
	{	
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (len_dest + len_src);
}
#include <stdio.h>
#include <string.h>
int	main()
{
	char dest[25] = "";
	char dest2[25] = "";
	char src[] = "123";
	char src2[] = "123";
	printf("%lu\n", strlcat(dest2, src2, 3));
	printf("%u\n", ft_strlcat(dest, src, 3));
	printf("%s\n",dest2);
	printf("%s\n", dest);
}

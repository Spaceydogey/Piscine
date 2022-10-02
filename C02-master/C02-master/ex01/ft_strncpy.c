/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 09:59:31 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/14 16:24:17 by hdelmas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char dest[12];
	char dest2[12];
	char *src = "byebye!";
	char *src2 = "byebye!";
	
	printf("%s\n", strncpy(dest2, src2,1 ));
	printf("%s", ft_strncpy(dest, src, 1));
}*/
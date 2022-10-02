/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 09:27:21 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/14 16:22:06 by hdelmas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include <stdio.h>
#include <string.h>
int	main()
{
	char *src = "test";
	char dest[5];
	char dest2[5];
	char *src2 = "test";

	printf("%s\n",strcpy(dest2, src2));
	printf("%s", ft_strcpy(dest, src));
}*/
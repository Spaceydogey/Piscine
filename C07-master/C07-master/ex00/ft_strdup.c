/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 10:48:27 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/22 10:56:19 by hdelmas          ###   ########.fr       */
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

char	*ft_strdup(char *src)
{
	int		i;
	int		src_len;
	char	*dest;

	if (!src)
		return (0);
	i = 0;
	dest = NULL;
	src_len = ft_strlen(src);
	dest = malloc(sizeof(*dest) * (src_len + 1));
	if (dest == NULL)
		return (0);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include <string.h>
#include <stdio.h>
int	main()
{
	char	*src = "beepboop";	
//	char	*src1 = NULL;
	char	*dest;
//	char	*dest1;

	dest = ft_strdup(src);
//	dest1 = strdup(src1);
	printf("%s\n", dest);
//	printf("%s\n", dest1);
	free(dest);
	dest = NULL;
}*/

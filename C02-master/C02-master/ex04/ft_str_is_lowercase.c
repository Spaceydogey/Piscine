/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 11:42:28 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/14 16:41:27 by hdelmas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
		{
			str++;
		}
		else
			return (0);
	}
	return (1);
}
/*#include <stdio.h>
int	main()
{
	printf("%d\n",ft_str_is_lowercase("eksfuhQ"));
	printf("%d\n",ft_str_is_lowercase("egeaugy"));
	printf("%d\n",ft_str_is_lowercase("ksufg ilau"));
	 printf("%d\n",ft_str_is_lowercase("test5"));
}*/
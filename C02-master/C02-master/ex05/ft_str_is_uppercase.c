/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:40:25 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/12 12:42:56 by hdelmas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 65 && *str <= 90)
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
	printf("%d\n",ft_str_is_uppercase("LKJ"));
	printf("%d\n",ft_str_is_uppercase(":LK"));
	printf("%d\n",ft_str_is_uppercase("KIJ"));
	printf("%d\n",ft_str_is_uppercase("klj"));
	 printf("%d\n",ft_str_is_uppercase("test5"));
}*/
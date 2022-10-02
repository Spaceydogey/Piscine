/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:45:13 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/12 16:53:38 by hdelmas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str <= 126 && *str >= 32)
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
	printf("%d\n",ft_str_is_printable(""));
	 printf("%d\n",ft_str_is_printable("test5"));
}*/
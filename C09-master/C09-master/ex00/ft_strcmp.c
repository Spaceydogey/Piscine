/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 09:59:51 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/19 19:13:00 by hdelmas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		i++;
	}	
	return (s1[i] - s2[i]);
}

#include <stdio.h>
#include <string.h>
int	main()
{	
	char *s1 = 0;
	char *s2 ="beeeeeEEEEEpp";

//	printf("%d \n",ft_strcmp(s1,s2));
	printf("%d \n", strcmp(s1,s2));
}

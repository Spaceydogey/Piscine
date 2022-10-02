/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 09:59:51 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/14 13:10:51 by hdelmas          ###   ########.fr       */
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
/*
#include <stdio.h>
#include <string.h>
int	main()
{	
//	char *s1 ="bee     eeeEEEEEp";
//	char *s2 ="beeeeeEEEEEpp";

	printf("%d \n",ft_strcmp("testa","testt"));
	printf("%d \n", strcmp("testa","testt"));
}*/

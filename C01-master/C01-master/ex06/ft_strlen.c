/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 15:25:12 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/11 16:03:20 by hdelmas          ###   ########.fr       */
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
/*
int	main()
{
	int size = ft_strlen("hello")  + 48;
	write(1, &size, 1); 
}*/

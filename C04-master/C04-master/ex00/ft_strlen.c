/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 10:47:26 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/14 10:47:48 by hdelmas          ###   ########.fr       */
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
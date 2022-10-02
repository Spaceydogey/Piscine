/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 11:39:02 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/10 15:19:23 by hdelmas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	count;

	count = 97;
	while (count <= 122)
	{
		write(1, &count, 1);
		count++;
	}
}
/*int main()
{
	
	ft_print_alphabet();
	return 0;
}*/

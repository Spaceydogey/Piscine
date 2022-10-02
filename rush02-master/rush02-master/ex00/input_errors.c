/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 11:21:52 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/25 12:11:10 by hdelmas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);
int ft_isnumber(char *str);

int	input_errors(int ac, char **av)
{
	(void)av;
	if(ac > 3 || ac == 1)
	{
 		ft_putstr("Error");
		return(0);
	}
	if (ft_isnumber(av[1]) == 0)
	{
 		ft_putstr("Error");
		return(0);
	}	
	return (1);
}

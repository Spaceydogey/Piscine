/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:37:25 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/15 18:51:36 by hdelmas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	nbr_arg;
	int	i;

	(void) argc;
	(void) argv;
	nbr_arg = argc;
	i = 1;
	while (i < nbr_arg)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}

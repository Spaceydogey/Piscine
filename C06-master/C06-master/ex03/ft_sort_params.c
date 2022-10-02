/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 08:33:28 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/20 15:27:02 by hdelmas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

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

void	ft_put_str(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

void	ft_sort(char **str, int size)
{
	int		i;
	char	*save;

	i = 1;
	while (i < size - 1)
	{	
		if (ft_strcmp(str[i], str[i + 1]) > 0)
		{
			save = str[i];
			str[i] = str[i + 1];
			str[i + 1] = save;
			i = 1;
		}
		else
			i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	char	**save_argv;

	(void) argv;
	(void) argc;
	i = 1;
	save_argv = argv;
	ft_sort(save_argv, argc);
	while (i < argc)
	{
		ft_put_str(save_argv[i]);
		i++;
	}
}

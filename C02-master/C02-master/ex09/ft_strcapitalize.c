/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:10:35 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/13 11:46:02 by hdelmas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alphanum(char *str)
{
	if (*str >= 97 && *str <= 122)
		return (1);
	else if (*str >= 65 && *str <= 90)
		return (1);
	else if (*str >= 48 && *str <= 57)
		return (1);
	else
		return (0);
}

int	ft_str_is_upcasealphanum(char *str)
{
	if (*str >= 65 && *str <= 90)
		return (1);
	else if (*str >= 48 && *str <= 57)
		return (1);
	else
		return (0);
}

char	*ft_lowercase(char *str, int i, int j)
{
	while (i <= j)
	{	
		if (*str >= 65 && *str <= 90)
		{
			*str = *str + 32;
		}
		i++;
		str++;
	}
	return (str);
}

int	ft_is_word_until(char *str)
{
	int	i;

	i = 0;
	while (ft_str_is_alphanum(&str[i]) == 1)
		i++;
	return (i);
}

char	*ft_strcapitalize(char *str)
{
	int	j;
	int	l;

	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] >= 97 && str[j] <= 122)
		{	
			l = j + 1;
			str[j] = str[j] - 32;
			j = j + ft_is_word_until(&str[j]);
			ft_lowercase(&str[l], l, j);
		}
		else if (ft_str_is_upcasealphanum(&str[j]) == 1)
		{
			l = j + 1;
			j = j + ft_is_word_until(&str[j]);
			ft_lowercase(&str[l], l, j);
		}
		else
			j++;
	}
	return (str);
}
/*#include <stdio.h>
int	main(void)
{
	char	tab[] = "SaLut, cOMMENT tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n",ft_strcapitalize(tab));
}*/
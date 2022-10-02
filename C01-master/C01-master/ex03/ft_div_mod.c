/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 11:40:15 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/11 13:20:09 by hdelmas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	save_div;
	int	save_mod;

	save_div = a / b;
	save_mod = a % b;
	*div = save_div;
	*mod = save_mod;
}
/*int	main()
{
	int a = 15;
	int b = 10;
	int *div;	
	int *mod;

	div = &a;
	mod = &b;
	ft_div_mod(a, b, div, mod);
	printf("%d,%d", *div, *mod);
}*/

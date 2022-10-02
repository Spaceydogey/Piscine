/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:03:58 by hdelmas           #+#    #+#             */
/*   Updated: 2022/09/25 12:12:13 by hdelmas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "incluidde.h"
#include <stdlib.h> 
#include <fcntl.h>
#include <unistd.h>
void    ft_putstr(char *str);
int	ft_read()
{
	int	fd;
	char line[16];
	int	ret;
	fd = open("numbers.dict.txt", O_RDONLY);
	if (fd == -1)
	{	
		ft_putstr("Dict Error");
		return (0);
	}
	ret = read(fd, line, 16);
	if (ret == -1)
	{
		ft_putstr("Dict Error");
		return(0);
	}
	else if (ret == 0)
	   ret = 16;
	write(1, line, ret);	
	close(fd);
	return(1);
}

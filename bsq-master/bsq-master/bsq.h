/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopeyrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:30:04 by dopeyrat          #+#    #+#             */
/*   Updated: 2022/09/28 12:49:03 by dopeyrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct s_square
{
	int	size;

	int	x;
	int	y;
}		t_square;

typedef struct s_map
{
	char	**board;

	char	e;
	char	o;
	char	f;

	int		size;
	int		len;
}		t_map;

typedef unsigned short int	t_short;

int		get_next_line(int fd, char **line, int size, int *i);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(char *str);
t_map	*init_map(char *str);
int		ft_strlen(char *str);
char	*ft_strncat_f(char *str, char *buff, int n);
int		ft_isprint_char(char c);
void	display_map(t_map *map);
int		solve_map(t_map *map);
t_map	*map_error(t_map *map, int fd, int n, int m);
int		parse_first_line(t_map *map, int fd);
t_map	*check_map(t_map *map, int fd);
int		free_tab(unsigned short int **tab, int n);
int		ft_error(char *leftover);
void	write_square(char **board, t_square *square, char c);
void	change_square(t_square *square, int size, int x, int y);

#endif

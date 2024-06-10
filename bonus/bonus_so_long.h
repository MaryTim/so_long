/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_so_long.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbudkevi <mbudkevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 19:21:57 by mbudkevi          #+#    #+#             */
/*   Updated: 2024/06/09 15:35:11 by mbudkevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BONUS_SO_LONG_H
# include <fcntl.h>
# include <stdbool.h>
# include "libftPrintfGnl/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <inttypes.h>
# include "../minilibx/mlx.h"
# define BONUS_SO_LONG_H

typedef struct s_txt
{
	void	*bomz;
	void	*wall;
	void	*road;
	void	*bottle;
	void	*zabka;
	void	*milicja;
}	t_txt;

typedef struct s_mlx
{
	void	*mlx;
	void	*win;
	t_txt	txt;
	int		p_pos[2];
	char	**map;
	int		e_pos[2];
	int		count;
}	t_mlx;

int		line_length(char *line);
int		map_length(char **map);
bool	is_playable(char **map);
bool	is_rectangular(char **map);
bool	is_closed(char **map);
bool	is_valid(char **map);
bool	is_valid_path(char **map);
int		count_coins(char **map);
void	start_game(char **map);
void	render_map(char **map, t_mlx mlx);
int		key_hook(int keycode, t_mlx *vars);
void	find_position(char **map, char letter, int *pos);
bool	find_element(char **map, char element);
void	find_exit(char **map, int pos[2]);
int		exit_game(t_mlx *vars);
void	display_moves(t_mlx *mlx, int moves);
void	destroy_textures(t_mlx *mlx);
void	free_map(char **map);

#endif
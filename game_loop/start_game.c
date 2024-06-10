/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_game.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbudkevi <mbudkevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 14:49:18 by mbudkevi          #+#    #+#             */
/*   Updated: 2024/06/09 15:35:49 by mbudkevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	*init_image(char *path, t_mlx mlx)
{
	int	size;

	size = 50;
	return (mlx_xpm_file_to_image(mlx.mlx, path, &size, &size));
}

void	init_textures(t_mlx *mlx)
{
	mlx->txt.bomz = init_image("textures/bomz.xpm", *mlx);
	mlx->txt.wall = init_image("textures/wall.xpm", *mlx);
	mlx->txt.road = init_image("textures/droga.xpm", *mlx);
	mlx->txt.bottle = init_image("textures/bottle.xpm", *mlx);
	mlx->txt.zabka = init_image("textures/zabka.xpm", *mlx);
	mlx->txt.milicja = init_image("textures/milicja.xpm", *mlx);
}

void	destroy_textures(t_mlx *mlx)
{
	mlx_destroy_image(mlx->mlx, mlx->txt.bomz);
	mlx_destroy_image(mlx->mlx, mlx->txt.road);
	mlx_destroy_image(mlx->mlx, mlx->txt.bottle);
	mlx_destroy_image(mlx->mlx, mlx->txt.zabka);
	mlx_destroy_image(mlx->mlx, mlx->txt.wall);
	mlx_destroy_image(mlx->mlx, mlx->txt.milicja);
}

void	start_game(char **map)
{
	t_mlx	mlx;

	mlx.count = 0;
	mlx.map = map;
	find_exit(map, mlx.e_pos);
	find_position(mlx.map, 'P', mlx.p_pos);
	mlx.mlx = mlx_init();
	mlx.win = mlx_new_window(mlx.mlx,
			line_length(map[0]) * 50,
			map_length(map) * 50,
			"so_long");
	init_textures(&mlx);
	render_map(map, mlx);
	mlx_key_hook(mlx.win, key_hook, &mlx);
	mlx_hook(mlx.win, 17, 0, exit_game, &mlx);
	mlx_loop(mlx.mlx);
}

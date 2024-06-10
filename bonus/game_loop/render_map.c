/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbudkevi <mbudkevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 15:49:18 by mbudkevi          #+#    #+#             */
/*   Updated: 2024/06/08 20:42:22 by mbudkevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus_so_long.h"

static void	put_image(t_mlx mlx, int i, int j, char **map)
{
	if (map[i][j] == '0')
		mlx_put_image_to_window(mlx.mlx, mlx.win, mlx.txt.road, j * 50, i * 50);
	if (map[i][j] == '1')
		mlx_put_image_to_window(mlx.mlx, mlx.win, mlx.txt.wall, j * 50, i * 50);
	if (map[i][j] == 'P')
		mlx_put_image_to_window(mlx.mlx, mlx.win, mlx.txt.bomz, j * 50, i * 50);
	if (map[i][j] == 'C')
		mlx_put_image_to_window(mlx.mlx,
			mlx.win, mlx.txt.bottle, j * 50, i * 50);
	if (map[i][j] == 'E')
		mlx_put_image_to_window(mlx.mlx, mlx.win,
			mlx.txt.zabka, j * 50, i * 50);
	if (map[i][j] == 'X')
		mlx_put_image_to_window(mlx.mlx, mlx.win,
			mlx.txt.milicja, j * 50, i * 50);
}

void	render_map(char **map, t_mlx mlx)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (map[i])
	{
		while (map[i][j])
		{
			put_image(mlx, i, j, map);
			j++;
		}
		j = 0;
		i++;
	}
}

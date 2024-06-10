/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_moves.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbudkevi <mbudkevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 16:01:59 by mbudkevi          #+#    #+#             */
/*   Updated: 2024/06/08 20:42:08 by mbudkevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus_so_long.h"

void	display_moves(t_mlx *mlx, int moves)
{
	char	*str;

	str = ft_itoa(moves);
	if (!str)
		return ;
	mlx_string_put(mlx->mlx, mlx->win, 50, 35, 0x00000000, "Moves: ");
	mlx_string_put(mlx->mlx, mlx->win, 100, 35, 0x00000000, str);
	free(str);
}

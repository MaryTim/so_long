/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbudkevi <mbudkevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 19:24:54 by mbudkevi          #+#    #+#             */
/*   Updated: 2024/06/08 20:43:00 by mbudkevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus_so_long.h"

bool	is_valid(char **map)
{
	return (is_rectangular(map)
		&& is_closed(map)
		&& is_playable(map)
		&& is_valid_path(map));
}

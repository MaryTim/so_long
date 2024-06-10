/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_rectangular.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbudkevi <mbudkevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:08:33 by mbudkevi          #+#    #+#             */
/*   Updated: 2024/05/24 16:38:14 by mbudkevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

bool	is_rectangular(char **map)
{
	int	i;
	int	first_line;

	i = 1;
	first_line = line_length(map[0]);
	while (map[i])
	{
		if (first_line != line_length(map[i]))
			return (false);
		i++;
	}
	return (true);
}

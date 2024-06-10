/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_element.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbudkevi <mbudkevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 17:55:30 by mbudkevi          #+#    #+#             */
/*   Updated: 2024/05/31 14:18:18 by mbudkevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

bool	find_element(char **map, char element)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (map[i])
	{
		while (map[i][j])
		{
			if (map[i][j] == element)
				return (false);
			j++;
		}
		j = 0;
		i++;
	}
	return (true);
}

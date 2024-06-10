/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_exit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbudkevi <mbudkevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 17:57:30 by mbudkevi          #+#    #+#             */
/*   Updated: 2024/06/09 17:20:12 by mbudkevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus_so_long.h"

void	find_exit(char **map, int pos[2])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (map[i])
	{
		while (map[i][j])
		{
			if (map[i][j] == 'E')
			{
				pos[1] = i;
				pos[0] = j;
				break ;
			}
			j++;
		}
		j = 0;
		i++;
	}
}

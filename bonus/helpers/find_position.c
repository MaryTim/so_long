/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_position.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbudkevi <mbudkevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:47:08 by mbudkevi          #+#    #+#             */
/*   Updated: 2024/05/30 16:47:13 by mbudkevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	find_position(char **map, char letter, int *pos)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (map[i])
	{
		while (map[i][j])
		{
			if (map[i][j] == letter)
			{
				pos[0] = j;
				pos[1] = i;
			}
			j++;
		}
		j = 0;
		i++;
	}
}

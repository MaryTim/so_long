/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_length.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbudkevi <mbudkevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 16:39:35 by mbudkevi          #+#    #+#             */
/*   Updated: 2024/05/24 16:39:52 by mbudkevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	map_length(char **map)
{
	int	i;

	i = 0;
	while (map[i])
		i++;
	return (i);
}

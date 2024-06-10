/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbudkevi <mbudkevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 17:21:27 by mbudkevi          #+#    #+#             */
/*   Updated: 2024/06/09 17:19:54 by mbudkevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftPrintfGnl/libft.h"
#include "so_long.h"

int	error_handling(char *message)
{
	ft_printf("Error\n%s", message);
	return (-1);
}

char	*str_join_free(char *s1, char *s2)
{
	char	*temp;

	temp = ft_strjoin(s1, s2);
	if (*s1)
		free(s1);
	free(s2);
	return (temp);
}

void	free_array(char **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}

char	**parse_map(char *file_name)
{
	int			fd;
	char		*temp;
	char		*res;
	char		**array;

	res = "";
	fd = open(file_name, O_RDONLY);
	if (fd == -1)
		perror("Error\n ");
	temp = get_next_line(fd);
	if (!temp)
		return (NULL);
	while (temp != NULL)
	{
		res = str_join_free(res, temp);
		temp = get_next_line(fd);
	}
	array = ft_split(res, '\n');
	free(res);
	return (array);
}

int	main(int argc, char **argv)
{
	char	**map;

	if (argc != 2)
		return (error_handling("Make sure you entered map description file"));
	map = parse_map(argv[1]);
	if (!map)
		return (error_handling("Something is wrong with map parsing"));
	if (!is_valid(map))
	{
		free_map(map);
		return (error_handling("Something is wrong with map validation"));
	}
	start_game(map);
	return (0);
}

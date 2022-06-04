/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 18:48:49 by rnabil            #+#    #+#             */
/*   Updated: 2022/05/31 18:48:53 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/so_long.h"

static int line_numbers(char *file_name)
{
	int 	fd;
	char	*line;
	int		size;

	fd = open(file_name, O_RDWR);
	line = get_next_line(fd);
	size = 0;
	while (line)
	{
		if (line)
			size++;
		free (line);
		line = get_next_line(fd);
	}
	close (fd);
	return (size);
}

static void	parse_line(t_app **app, char **line, int *line_size, int i)
{
	char *to_free;

	to_free = *line;
	*line = ft_strtrim(*line, "\n");
	if (*line_size == -1)
		*line_size = (int)ft_strlen(*line);
	if ((int)ft_strlen(*line) != *line_size)
		error(&*app);
	free(to_free);
}

static void check_walls(t_app **app, int size, int width)
{
	int	i;
	int	j;

	i = 0;
	while ((*app)->map[0][i])
	{
		if ((*app)->map[0][i] != '1')
			error(&*app);
		i++;
	}
	i = 0;
	while ((*app)->map[size - 1][i])
	{
		if ((*app)->map[size - 1][i] != '1')
			error(&*app);
		i++;
	}
	i = 0;
	while (i < size)
	{
		if ((*app)->map[i][0] != '1' || (*app)->map[i][width - 1] != '1')
			error(&*app);
		i++;
	}
}

void	parsing(char *file_name, t_app **app)
{
	char	*name;
	char	*line;
	int		fd;
	int		line_size;
	int		lines;
	int		i;

	//collectible count (must be more than 1)
	//player and exit count (must be only 1)
	name = ft_strjoin("Map/", file_name);
	lines = line_numbers(name);
	if (line_size < 3)
		exit(EXIT_FAILURE);
	fd = open(name, O_RDWR);
	i = 0;
	line_size = -1;
	(*app)->map = (char **)malloc(sizeof(char *) * (lines + 1));
	if ((*app)->map == NULL)
		return ;
	line = get_next_line(fd);
	while (line)
	{
		//there is a double free when I have error 
		parse_line(app, &line, &line_size, i);
		(*app)->map[i] = line;
		i++;
		line = get_next_line(fd);
	}
	(*app)->map[i] = line;
	check_walls(app, lines, line_size);
	check_collecs(&*app, lines, line_size);
	close(fd);
	free(name);
}
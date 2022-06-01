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

int line_numbers(char *file_name)
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

void    parsing(char *file_name, t_app **app)
{
    int     fd;
    char    *name;
    char    *line;
    int     width;
    int     height;
    int     i;

	//error function
	//check the first and last row must be walls
	//check the first and last element in the map that must be wall
	//collectible count (must be more than 1)
	//player and exit count (must be only 1)
    name = ft_strjoin("Map/", file_name);
	if (line_numbers <= 0)
		exit(EXIT_FAILURE);
	ft_printf("%d\n",line_numbers(name));
    fd = open(name, O_RDWR);
    i = 0;
    line = get_next_line(fd);
    while (line)
    {
        line = ft_strtrim(line, "\n");
        //(*app)->map[i++] = (char *)malloc(sizeof(char))
        ft_printf("%s:%d\n",line,(int)ft_strlen(line));
		free(line);
        line = get_next_line(fd);
    }
    close(fd);
    free(line);
    free(name);
}
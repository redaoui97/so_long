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

void    parsing(char *file_name, t_app **app)
{
    int     fd;
    char    *name;
    char    *line;

    //there is a problem here, can't read the file name
    name = ft_strjoin("../Map/", file_name);
    fd = open(name, O_RDWR);
    line = get_next_line(fd);
    printf("%s\n",line);
    free(line);
    free(name);
}
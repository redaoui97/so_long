/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_win.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 18:35:22 by rnabil            #+#    #+#             */
/*   Updated: 2022/06/04 18:35:40 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/so_long.h"

int	get_width(t_app **app)
{
	int	i;

	i = 0;
	while ((*app)->map[0][i])
		i++;
	return (i);
}

int	get_height(t_app **app)
{
	int	i;

	i = 0;
	while ((*app)->map[i])
		if ((*app)->map[i])
			i++;
	return (i);
}

void	open_window(t_app **app, char *win_name)
{
	int	width;
	int	height;

	width = get_width(&*app);
	height = get_height(&*app);
	(*app)->window = mlx_new_window((*app)->mlx, width * PIC_SIZE,
			height * PIC_SIZE, win_name);
}

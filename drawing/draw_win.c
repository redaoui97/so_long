/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_win.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 18:49:20 by rnabil            #+#    #+#             */
/*   Updated: 2022/06/04 18:49:53 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/so_long.h"

void	calculate_collecs(t_app **app)
{
	int	i;
	int	j;

	i = 0;
	while ((*app)->map[i])
	{
		j = 0;
		while ((*app)->map[i][j])
		{
			if ((*app)->map[i][j] == 'c' || (*app)->map[i][j] == 'C')
				(*app)->collecs++;
			j++;
		}
		i++;
	}
}

static void	*find_box(t_app **app, char chr)
{
	if (chr == 'p' || chr == 'P')
		return ((*app)->player);
	if (chr == '1')
		return ((*app)->wall);
	if (chr == '0')
		return ((*app)->ground);
	if (chr == 'c' || chr == 'C')
		return ((*app)->collectible);
	if (chr == 'e' || chr == 'E')
		return ((*app)->closed_door);
	return (NULL);
}

void	draw_win(t_app **app)
{
	int		i;
	int		j;
	void	*box;

	i = 0;
	while ((*app)->map[i])
	{
		j = 0;
		while ((*app)->map[i][j])
		{
			box = find_box(&*app, (*app)->map[i][j]);
			mlx_put_image_to_window((*app)->mlx, (*app)->window, box, j * PIC_SIZE, i * PIC_SIZE);
			j++;
		}
		i++;
	}
	calculate_collecs(&*app);
}

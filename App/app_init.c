/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   app_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:44:24 by rnabil            #+#    #+#             */
/*   Updated: 2022/05/27 16:46:06 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/so_long.h"

t_app	*app_init(int width, int height)
{
	t_app	*app;
	int		i;

	i = PIC_SIZE;
	app = (t_app *)malloc(sizeof(t_app));
	app->mlx = mlx_init();
	app->wall = mlx_xpm_file_to_image(app->mlx, "assets/wall_small.xpm", &i, &i);
	app->ground = mlx_xpm_file_to_image(app->mlx, "assets/ground_small.xpm", &i, &i);
	app->player = mlx_xpm_file_to_image(app->mlx, "assets/player_small.xpm", &i, &i);
	app->collectible = mlx_xpm_file_to_image(app->mlx, "assets/collectible_small.xpm", &i, &i);
	app->open_door = mlx_xpm_file_to_image(app->mlx, "assets/open_door.xpm", &i, &i);
	app->closed_door = mlx_xpm_file_to_image(app->mlx, "assets/close_door.xpm", &i, &i);
	app->moves = 0;
	app->collecs = 0;
	app->map = NULL;
	return (app);
}

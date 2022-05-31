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

	i = 64;
	app = (t_app *)malloc(sizeof(t_app));
	app->mlx = mlx_init();
	app->window = mlx_new_window(app->mlx, width, height, "so long"); //Idk which one is height and width
	app->img = mlx_xpm_file_to_image(app->mlx, "assets/wall_small.xpm", &i, &i);
	app->img2 = mlx_xpm_file_to_image(app->mlx, "assets/ground_small.xpm", &i, &i);
	app->img3 = mlx_xpm_file_to_image(app->mlx, "assets/player_small.xpm", &i, &i);
	app->img4 = mlx_xpm_file_to_image(app->mlx, "assets/collectible_small.xpm", &i, &i);
	app->img5 = mlx_xpm_file_to_image(app->mlx, "assets/open_door.xpm", &i, &i);
	app->img6 = mlx_xpm_file_to_image(app->mlx, "assets/close_door.xpm", &i, &i);
	printf("hither %p\n", app->img);
	mlx_put_image_to_window(app->mlx, app->window, app->img, 0, 0);
	return (app);
}

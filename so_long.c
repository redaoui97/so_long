/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 14:38:45 by rnabil            #+#    #+#             */
/*   Updated: 2022/05/27 14:40:03 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/so_long.h"


int	main(int argc, char **argv)
{
	t_app	*app;

	if (argc < 2)//< or !=
		exit(EXIT_FAILURE);
	app = app_init(256, 256);
	parsing(argv[1], &app);
	open_window(&app, "so long");
	draw_win(&app);
	mlx_loop(app->mlx);
	//mlx_hook(win, );
	clear_app(&app);
	return (0);
}

//mlx_put_image_to_window(app->mlx, app->window, app->img5, 0, 0);
// mlx_put_image_to_window(mlx, win, img, 0, 64);
	// mlx_put_image_to_window(mlx, win, img, 0, 128);
	// mlx_put_image_to_window(mlx, win, img, 0, 192);
	// mlx_put_image_to_window(mlx, win, img, 64, 0);
	// mlx_put_image_to_window(mlx, win, img, 128, 0);
	// mlx_put_image_to_window(mlx, win, img, 192, 0);
	// mlx_put_image_to_window(mlx, win, img, 192, 192);
	// mlx_put_image_to_window(mlx, win, img, 192, 128);
	// mlx_put_image_to_window(mlx, win, img6, 192, 64);
	// mlx_put_image_to_window(mlx, win, img, 128, 192);
	// mlx_put_image_to_window(mlx, win, img, 64, 192);
	// mlx_put_image_to_window(mlx, win, img2, 128, 64);
	// mlx_put_image_to_window(mlx, win, img3, 64, 64);
	// mlx_put_image_to_window(mlx, win, img4, 64, 128);
	// mlx_put_image_to_window(mlx, win, img5, 128, 128);
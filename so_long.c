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
	// t_app	*app;
	void *mlx;
	void *win;
	void *img;
	int i = 32;
	
	// if (argc < 2)//< or !=
	// 	exit(EXIT_FAILURE);
	// parsing(argv[1], &app);
	mlx = mlx_init();
	win = mlx_new_window(mlx, 500, 500, "so long");
	img = mlx_xpm_file_to_image(mlx, "assets/Player_small.xpm", &i, &i);
	mlx_put_image_to_window(mlx, win, img, 250, 250);
	mlx_put_image_to_window(mlx, win, img, 0, 32);
	mlx_put_image_to_window(mlx, win, img, 32, 0);
	//mlx_put_image_to_window(mlx, win, img, 32, 32);
	//mlx_hook(win, );
	mlx_loop(mlx);
	return (0);
}

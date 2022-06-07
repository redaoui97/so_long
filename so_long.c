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

	app = NULL;
	if (argc != 2)
		exit(EXIT_FAILURE);
	app = app_init(256, 256);
	parsing(argv[1], &app);
	open_window(&app, "so long");
	draw_win(&app);
	mlx_hook(app->window, 2, (1L << 2), set_move, &app);
	mlx_hook(app->window, 17, (0L), exit_game, &app);
	mlx_loop(app->mlx);
	return (0);
}

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

	app = (t_app*)malloc(sizeof(t_app));
	app->mlx_pointer = mlx_init();
	app->window = mlx_new_window(app->mlx_pointer, width, height, "so_long_window");
	return (app);
}

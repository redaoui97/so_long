/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_move.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 22:13:14 by rnabil            #+#    #+#             */
/*   Updated: 2022/06/04 22:15:59 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/so_long.h"

int	set_move(t_app **app, int key)
{
	if (key == 13)
		move_up(&*app);
	// if (key == 0)
	// 	move_left(*app);
	// if (key == 1)
	// 	move_down(*app);
	// if (key == 2)
	// 	move_right(*app);
	// if (key == 53)
	// 	end_game(*app, 53);
	// if (key == 13 || key == 0 || key == 1 || key == 2)
	// 	draw_win(&app);
	return (0);
}

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

int	set_move(int key, t_app **app)
{
	if (key == 13)
		move_up(&*app);
	if (key == 0)
		move_left(&*app);
	if (key == 1)
		move_down(&*app);
	if (key == 2)
		move_right(&*app);
	if (key == 53)
		finish_game(&*app);
	return (0);
}

int	exit_game(t_app **app)
{
	clear_app(&*app);
	free (*app);
	exit(EXIT_SUCCESS);
	return (0);
}

void	finish_game(t_app **app)
{
	if ((*app)->collecs == 0)
	{
		clear_app(&*app);
		ft_printf("You won!\n");
		free (*app);
		exit(EXIT_SUCCESS);
	}
	else
	{
		clear_app(&*app);
		ft_printf("You lose!\n");
		free (*app);
		exit(EXIT_SUCCESS);
	}
}

void	find_player(t_app **app, int *i, int *j)
{
	*i = 0;
	while ((*app)->map[*i])
	{
		*j = 0;
		while ((*app)->map[*i][*j])
		{
			if ((*app)->map[*i][*j] == 'p' || (*app)->map[*i][*j] == 'P')
				return ;
			(*j)++;
		}
		(*i)++;
	}
}

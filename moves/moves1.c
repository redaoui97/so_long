/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 00:12:51 by rnabil            #+#    #+#             */
/*   Updated: 2022/06/05 00:13:05 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/so_long.h"

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
			*j++;
		}
		*i++;
	}
}

void	move_up(t_app **app)
{
	int	i;
	int	j;

	find_player(&*app, &i, &j);
	if ((*app)->map[i - 1][j] == '0')
	{
		(*app)->map[i][j] = '0';
		(*app)->map[i - 1][j] = 'P';
	}
	if ((*app)->map[i - 1][j] == 'c' || (*app)->map[i - 1][j] == 'C')
	{
		(*app)->map[i][j] = '0';
		(*app)->map[i - 1][j] = 'P';
	}
	draw_win(&app);
}

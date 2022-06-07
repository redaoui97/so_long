/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_src.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 23:52:48 by rnabil            #+#    #+#             */
/*   Updated: 2022/06/03 23:53:02 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/so_long.h"

static void	check_collecs_src(t_app **app, char chr, int *collecs)
{
	if (chr == 'C' || chr == 'c')
		(*collecs)++;
	if (chr != '1' && chr != '0' && chr != 'C' && chr != 'c'
		&& chr != 'P' && chr != 'p' && chr != 'E' && chr != 'e')
		error(&*app, "The map has an invalid character\n");
}

static void	check_collecs_src2(t_app **app, char chr, int *player, int *exit)
{
	if (chr == 'P' || chr == 'p')
		(*player)++;
	if (chr == 'E' || chr == 'e')
		(*exit)++;
}

void	check_collecs(t_app **app, int size, int width)
{
	int	i;
	int	j;
	int	collecs;
	int	player;
	int	exit;

	exit = 0;
	collecs = 0;
	player = 0;
	i = 0;
	while ((*app)->map[i])
	{
		j = 0;
		while ((*app)->map[i][j])
		{
			check_collecs_src(&*app, (*app)->map[i][j], &collecs);
			check_collecs_src2(&*app, (*app)->map[i][j++], &player, &exit);
		}
		i++;
	}
	if (collecs < 1 || exit < 1)
		error(&*app, "less than 1 exit or collectible\n");
	if (player != 1)
		error(&*app, "The player's startubg position in invalid\n");
}

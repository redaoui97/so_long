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

static void	check_exit(t_app **app, char *chr, char *next_chr)
{
	if (*next_chr == 'e' || *next_chr == 'E' && !(*app)->collecs)
	{
		*chr = '0';
		*next_chr = 'P';
 		finish_game(&*app);
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
		((*app)->collecs)--;
	}
	(*app)->moves++;
	ft_printf("%d\n", (*app)->moves);
	check_exit(&*app, &((*app)->map[i][j]), &((*app)->map[i - 1][j]));
	draw_win(&*app);
}

void	move_left(t_app **app)
{
	int	i;
	int	j;

	find_player(&*app, &i, &j);
	if ((*app)->map[i][j - 1] == '0')
	{
		(*app)->map[i][j] = '0';
		(*app)->map[i][j - 1] = 'P';
	}
	if ((*app)->map[i][j - 1] == 'c' || (*app)->map[i][j - 1] == 'C')
	{
		(*app)->map[i][j] = '0';
		(*app)->map[i][j - 1] = 'P';
		((*app)->collecs)--;
	}
	(*app)->moves++;
	ft_printf("%d\n", (*app)->moves);
	check_exit(&*app, &((*app)->map[i][j]), &((*app)->map[i][j - 1]));
	draw_win(&*app);
}

void	move_right(t_app **app)
{
	int	i;
	int	j;

	find_player(&*app, &i, &j);
	if ((*app)->map[i][j + 1] == '0')
	{
		(*app)->map[i][j] = '0';
		(*app)->map[i][j + 1] = 'P';
	}
	if ((*app)->map[i][j + 1] == 'c' || (*app)->map[i][j + 1] == 'C')
	{
		(*app)->map[i][j] = '0';
		(*app)->map[i][j + 1] = 'P';
		((*app)->collecs)--;
	}
	(*app)->moves++;
	ft_printf("%d\n", (*app)->moves);
	check_exit(&*app, &((*app)->map[i][j]), &((*app)->map[i][j + 1]));
	draw_win(&*app);
}

void	move_down(t_app **app)
{
	int	i;
	int	j;

	find_player(&*app, &i, &j);
	if ((*app)->map[i + 1][j] == '0')
	{
		(*app)->map[i][j] = '0';
		(*app)->map[i + 1][j] = 'P';
	}
	if ((*app)->map[i + 1][j] == 'c' || (*app)->map[i + 1][j] == 'C')
	{
		(*app)->map[i][j] = '0';
		(*app)->map[i + 1][j] = 'P';
		((*app)->collecs)--;
	}
	(*app)->moves++;
	ft_printf("%d\n", (*app)->moves);
	check_exit(&*app, &((*app)->map[i][j]), &((*app)->map[i + 1][j]));
	draw_win(&*app);
}
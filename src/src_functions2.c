/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src_functions2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 18:34:17 by rnabil            #+#    #+#             */
/*   Updated: 2022/06/01 18:35:15 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/so_long.h"

void	clear_app(t_app **app)
{
	int	i;

	i = 0;
	if ((*app)->map)
	{
		while ((*app)->map[i])
			free((*app)->map[i++]);
				free((*app)->map);
	}
	free(*app);
}

void	error(t_app **app)
{
	if (*app)
		clear_app(&*app);
	ft_printf("Error\n");
	exit(EXIT_FAILURE);
}
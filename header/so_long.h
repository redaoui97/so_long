/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:24:37 by rnabil            #+#    #+#             */
/*   Updated: 2022/03/22 15:48:27 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SO_LONG_H
# define SO_LONG_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include "mlx.h"

# ifndef PIC_SIZE
# define PIC_SIZE 64
# endif

typedef	struct map
{
	//stuff
}	t_map;

typedef struct app{
	void			*mlx;
	void			*window;
	void			*img;
	void			*img2;
	void			*img3;
	void			*img4;
	void			*img5;
	void			*img6;
	t_map			*map;
}	t_app;

t_app	*app_init(int width, int height);

#endif
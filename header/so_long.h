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

# ifndef MAX_FD
#  define MAX_FD 65535
# endif

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE    1
# endif

typedef	struct map
{
	//stuff
}	t_map;

typedef struct app{
	void			*mlx;
	void			*window;
	//change names for imgs 
	void			*img;
	void			*img2;
	void			*img3;
	void			*img4;
	void			*img5;
	void			*img6;
	t_map			*map;
}	t_app;

/*src_functions*/
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *s);

/*get_next_line_functions*/
char	*get_next_line(int fd);
int		init_function(char **text, char **buffer);
char	*fix_line_text(char **text, char **line, int nl_position);
char	*fix_text(char **str, int nl_position);
int		check_newline(char *buffer);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strjoin2(char const *s1, char const *s2);
char	*ft_strdup(const char *s1);

/*App_functions*/
t_app	*app_init(int width, int height);
void    parsing(char *file_name, t_app **app);
#endif
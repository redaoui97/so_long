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
# include <stdarg.h>
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
	void			*wall;
	void			*ground;
	void			*player;
	void			*collectible;
	void			*open_door;
	void			*closed_door;
	char			*map;
}	t_app;

/*src_functions*/
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *s);
char	*ft_strtrim(char const *s1, char const *set);
/*src2_functions*/
void    error(t_app **app);
void    clear_app(t_app **app);

/*ft_printf_functions*/
int	ft_printf(const char *f, ...);
int	print_str(char *str);
int	print_nbr(int n);
int	print_nbr_unsigned(unsigned int n);
int	print_hex_upper(unsigned int a);
int	print_hex_lower(unsigned int a);
int	print_char(char chr);
int	print_addresse(unsigned long int adr);

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
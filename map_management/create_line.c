/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_line.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:42:13 by rnabil            #+#    #+#             */
/*   Updated: 2022/03/22 16:05:37 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/so_long.h"

node	add_line(char *str)
{
	node	*n;

	n = (node *)malloc(sizeof(node));
	if (!n)
		return (NULL);
	n->previous = NULL;
	n->next = NULL;
	n->content = ft_strdup(str);
	return (n);
}

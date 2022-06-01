/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex_lower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:03:47 by rnabil            #+#    #+#             */
/*   Updated: 2021/12/11 21:00:56 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/so_long.h"

static	int	nbr_size(unsigned int nbr)
{
	int	count;

	if (!nbr)
		return (1);
	count = 0;
	while (nbr > 0)
	{
		count++;
		nbr /= 16;
	}
	return (count);
}

int	print_hex_lower(unsigned int a)
{
	int				count;

	count = nbr_size(a);
	if (a < 16)
		print_char("0123456789abcdef"[a % 16]);
	else
	{
		print_hex_lower(a / 16);
		print_hex_lower(a % 16);
	}
	return (count);
}

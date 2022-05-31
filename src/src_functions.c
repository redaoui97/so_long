/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src_functions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 18:51:39 by rnabil            #+#    #+#             */
/*   Updated: 2022/05/31 18:51:51 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/so_long.h"

size_t	ft_strlen(const char *s)
{
	size_t	a;

	a = 0;
	while (s[a])
		a++;
	return (a);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*a;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	a = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!a)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s1))
	{
		a[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < ft_strlen(s2))
		a[i++] = s2[j++];
	a[i] = '\0';
	return (a);
}
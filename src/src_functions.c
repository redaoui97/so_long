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

static int	exists(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(set))
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*a;
	size_t	i;
	size_t	first;
	size_t	last;

	if (!s1)
		return (NULL);
	if (!*s1)
		return (ft_strdup(""));
	first = 0;
	i = 0;
	while (s1[first] && exists(s1[first], set))
		first++;
	last = ft_strlen(s1) - 1;
	while (last > first && exists(s1[last], set))
		last--;
	a = (char *)malloc((last - first + 2) * sizeof(char));
	if (!a)
		return (NULL);
	while (first <= last)
		a[i++] = s1[first++];
	a[i] = 0;
	return (a);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhames <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 13:48:24 by mokhames          #+#    #+#             */
/*   Updated: 2019/10/24 22:26:21 by mokhames         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	int		i;
	int		j;
	int		k;
	char	*p;

	i = -1;
	j = 0;
	p = (char *)str;
	if (!str && to_find && !len)
		return (NULL);
	if (!*to_find || p == to_find)
		return (p);
	while (p[++i] && len-- > 1)
	{
		if (p[i] == to_find[0])
		{
			k = i + 1;
			j = 1;
			while (to_find[j] != '\0' && to_find[j] == p[k++] && len-- > 1)
				j++;
			if (to_find[j] == '\0')
				return (p + i);
		}
	}
	return (0);
}

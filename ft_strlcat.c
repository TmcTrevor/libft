/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhames <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 21:05:46 by mokhames          #+#    #+#             */
/*   Updated: 2019/10/26 01:27:58 by mokhames         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	j = 0;
	i = 0;
	k = 0;
	while (src[j])
		j++;
	if (size == 0)
		return (j);
	while (dst[i])
		i++;
	if (size > i)
	{
		j += i;
		while (src[k] && i + 1 < size)
			dst[i++] = src[k++];
		dst[i] = '\0';
	}
	else
		j += size;
	return (j);
}

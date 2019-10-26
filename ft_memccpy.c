/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhames <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 17:08:56 by mokhames          #+#    #+#             */
/*   Updated: 2019/10/21 23:14:43 by mokhames         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*dst_1;
	unsigned char		*src_1;
	size_t				i;

	dst_1 = (unsigned char *)dst;
	src_1 = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dst_1[i] = src_1[i];
		if (src_1[i] == (unsigned char)c)
			return ((void *)dst + i + 1);
		i++;
	}
	return (0);
}

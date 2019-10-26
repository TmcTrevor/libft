/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhames <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:40:37 by mokhames          #+#    #+#             */
/*   Updated: 2019/10/22 17:50:37 by mokhames         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst_1;
	char	*src_1;

	dst_1 = (char *)dst;
	src_1 = (char *)src;
	if (dst_1 == src_1)
		return (dst);
	if (src_1 < dst_1)
	{
		src_1 = (char *)src + len - 1;
		dst_1 = (char *)dst + len - 1;
		while (len--)
			*dst_1-- = *src_1--;
	}
	else
		while (len--)
			*dst_1++ = *src_1++;
	return (dst);
}

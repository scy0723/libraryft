/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chashin <chashin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 15:50:53 by chashin           #+#    #+#             */
/*   Updated: 2022/08/20 15:52:50 by chashin          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*buf_src;
	unsigned char	*buf_dst;
	size_t			i;

	i = 0;
	buf_src = (unsigned char *)src;
	buf_dst = (unsigned char *)dst;
	if (dst == 0 && src == 0)
		return (NULL);
	while (i < len)
	{
		if (src > dst)
			buf_dst[i] = buf_src[i];
		else
			buf_dst[len - 1 - i] = buf_src[len - 1 - i];
		i++;
	}
	return (buf_dst);
}

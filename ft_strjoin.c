/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chashin <chashin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 15:51:17 by chashin           #+#    #+#             */
/*   Updated: 2022/08/20 15:53:12 by chashin          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_s;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 || !s2)
		return (0);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new_s = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!new_s)
		return (0);
	ft_memcpy(new_s, s1, s1_len);
	ft_memcpy(new_s + s1_len, s2, s2_len);
	new_s[s1_len + s2_len] = 0;
	return (new_s);
}

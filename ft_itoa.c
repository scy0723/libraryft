/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chashin <chashin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 15:50:24 by chashin           #+#    #+#             */
/*   Updated: 2022/08/20 15:52:21 by chashin          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_nbr(long long n)
{
	int	cnt_nbr;

	if (n == 0 || n == -0)
		return (1);
	cnt_nbr = 0;
	if (n < 0)
		cnt_nbr = 1;
	while (n)
	{
		n /= 10;
		cnt_nbr++;
	}
	return (cnt_nbr);
}

char	*ft_itoa(int n)
{
	long long	nbr;
	char		*res;
	int			len;

	len = count_nbr(n);
	nbr = (long long)n;
	if (n < 0)
		nbr *= -1;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len--] = '\0';
	while (len >= 0)
	{
		res[len] = nbr % 10 + '0';
		nbr /= 10;
		len--;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}

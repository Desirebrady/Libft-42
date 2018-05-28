/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 13:18:03 by dshumba           #+#    #+#             */
/*   Updated: 2018/05/25 11:55:31 by dshumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define INT_MAX 2147483647

int		ft_atoi(const char *s)
{
	int 		sign;
	int			res;
	size_t		i;

	sign = 1;
	res = 0;
	i = 0;
	while ((s[i] >= 9 && s[i] <= 13) || s[i] == 32)
		i++;
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
		i++;
	while (s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10 + (s[i] - '0');
		i++;
		if ( (res * sign) > INT_MAX )
			return (-1);
	}
	return (res * sign);
}

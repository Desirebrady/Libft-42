/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 08:09:29 by dshumba           #+#    #+#             */
/*   Updated: 2018/05/23 08:15:24 by dshumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dp;
	const char	*sp;
	size_t		i;

	i = 0;
	sp = src;
	dp = dest;
	while (n--)
	{
		dp[i] = sp[i];
		i++;
	}
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 08:01:44 by dshumba           #+#    #+#             */
/*   Updated: 2018/05/23 08:34:36 by dshumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;
	unsigned char	k;

	k = (unsigned char)c;
	i = 0;
	str1 = (unsigned char *)src;
	str2 = (unsigned char *)dest;
	while (i < n)
	{
		str2[i] = str1[i];
		if (str2[i] == k)
		{
			return (str2 + i + 1);
		}
		i++;
	}
	return (0);
}
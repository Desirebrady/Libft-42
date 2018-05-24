/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 12:02:37 by dshumba           #+#    #+#             */
/*   Updated: 2018/05/24 10:22:12 by dshumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t counter;
	size_t k;

	k = ft_strlen(src);
	i = ft_strlen(dst);
	counter = 0;
	if (size <= i)
		return (k + size);
	while (src[counter] && counter < size - i - 1)
	{
		dst[i] = src[counter];
		i++;
		counter++;
	}
	dst[i] = '\0';
	return (i + k);
}

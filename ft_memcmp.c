/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 08:05:11 by dshumba           #+#    #+#             */
/*   Updated: 2018/05/23 08:53:53 by dshumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int 	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char *p1;
	const unsigned char *p2;

	p1 = str1;
	p2 = str2;
	while(n--)
	{
		if (*p1 != *p2)
			return((unsigned int)*p1 - (unsigned int)*p2);
		else 
			p1++;
			p2++;
	}
	return (0);
}

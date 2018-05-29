/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 13:47:03 by dshumba           #+#    #+#             */
/*   Updated: 2018/05/29 14:10:10 by dshumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t 	x;
	size_t	y;
	char 	*s1;

	s1 = (char *)str;
	x = 0;
	y = 0;
	if (to_find[0] == '\0')
		return (s1);
	while (str[x] && x < len)
	{
		while (str[x] == to_find[y] && str[x])
		{
			x++;
			y++;
		}
		if (to_find[y] == '\0')
			return (&s1[x-y]);
		x++;
	}
	return (0);
}

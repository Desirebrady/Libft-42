/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 08:45:43 by dshumba           #+#    #+#             */
/*   Updated: 2018/05/24 11:12:29 by dshumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *str, const char *to_find)
{
	int		x;
	int		y;
	char	*s1;

	s1 = (char *)str;
	x = 0;
	y = 0;
	if (to_find[0] == '\0')
		return (s1);
	while (str[x] != '\0')
	{
		while (str[x] == to_find[y] && str[x] != '\0')
		{
			x++;
			y++;
		}
		if (to_find[y] == '\0')
			return (&s1[x - y]);
		x++;
	}
	return (0);
}

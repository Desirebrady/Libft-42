/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 16:16:31 by dshumba           #+#    #+#             */
/*   Updated: 2018/05/29 16:37:33 by dshumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(const char *s)
{
	size_t	start;
	size_t	len;

	start = 0;
	if (!s)
		return (NULL);
	while (((s[start] == ' ') || (s[start] == '\n')
			|| (s[start] == '\t')) && (s[start] != '\0'))
		start++;
	len = ft_strlen(s);
	while (((s[len - 1] == ' ') || (s[len - 1] == '\n')
			|| (s[len - 1] == '\t')) && (s[start] != '\0'))
		len--;
	str = ft_strsub(s, start, len - start);
	if (str)
		return (str);
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 08:39:14 by dshumba           #+#    #+#             */
/*   Updated: 2018/05/28 08:44:24 by dshumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *st)
{
	int		len;
	char	*dr;
	int		i;
	int		j;

	len = (ft_strlen(st) - 1);
	i = 0;
	j = 0;
	while (st[i] == '\n' || st[i] == '\t' || st[i] == 32)
		i++;
	dr = (char *)malloc(sizeof(char) * (len - i + 1));
	while (st[len] == '\n' || st[len] == '\t' || st[len] == 32)
		len--;
	while (i <= len)
	{
		dr[j] = st[i];
		i++;
		j++;
	}
	dr[j] = '\0';
	return (dr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyie-xua <lyie-xua@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:44:12 by lyie-xua          #+#    #+#             */
/*   Updated: 2023/01/18 18:07:19 by lyie-xua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	d;
	size_t	s;
	size_t	l;

	i = 0;
	if (!(dest) && !(size))
		return (ft_strlen(src));
	d = ft_strlen(dest);
	s = ft_strlen(src);
	l = ft_strlen(dest);
	if (d < size)
	{
		while (d < size - 1 && src[i] != '\0')
		{
			dest[d] = src[i];
			i++;
			d++;
		}
		dest[d] = '\0';
		return (l + s);
	}
	return (s + size);
}

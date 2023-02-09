/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyie-xua <lyie-xua@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:43:44 by lyie-xua          #+#    #+#             */
/*   Updated: 2023/01/16 14:43:45 by lyie-xua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t length)
{
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (d > s)
	{
		while (length > 0)
		{
			length--;
			d[length] = s[length];
		}
	}
	else
		ft_memcpy(dest, src, length);
	return (dest);
}

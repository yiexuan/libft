/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyie-xua <lyie-xua@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:42:28 by lyie-xua          #+#    #+#             */
/*   Updated: 2023/01/16 14:42:30 by lyie-xua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t length)
{
	char	*p;

	p = (char *)s;
	while (length > 0)
	{
		p[length - 1] = c;
		length--;
	}
	return (s);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyie-xua <lyie-xua@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:46:15 by lyie-xua          #+#    #+#             */
/*   Updated: 2023/01/16 15:05:13 by lyie-xua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t length)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (i < length && haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == needle[j] && haystack[i + j] != '\0'
			&& needle[j] != '\0' && i + j < length)
			j++;
		if (needle[j] == '\0')
			return ((char *)haystack + i);
		else
			i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyie-xua <lyie-xua@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:46:46 by lyie-xua          #+#    #+#             */
/*   Updated: 2023/01/16 15:14:31 by lyie-xua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	size;
	char	*str;

	if (s == NULL)
		return (NULL);
	size = ft_strlen(s) - start;
	if (ft_strlen(s) > start)
	{
		if (size > len)
			str = (char *)malloc((len + 1) * sizeof(char));
		else
			str = (char *)malloc((size + 1) * sizeof(char));
		if (str == NULL)
			return (NULL);
		ft_strlcpy(str, &s[start], len + 1);
	}
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	return (str);
}

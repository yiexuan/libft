/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyie-xua <lyie-xua@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:46:28 by lyie-xua          #+#    #+#             */
/*   Updated: 2023/01/18 12:58:29 by lyie-xua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	void	*ptr;

	if (number >= SIZE_MAX || size >= SIZE_MAX)
		return (NULL);
	ptr = (void *)malloc(number * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, number * size);
	return (ptr);
}	

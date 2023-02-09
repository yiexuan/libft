/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyie-xua <lyie-xua@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:57:02 by lyie-xua          #+#    #+#             */
/*   Updated: 2023/01/18 17:14:01 by lyie-xua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_len(int n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
	{
		i++;
	}
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	size_t	size;
	char	*ptr;
	long	num;

	size = get_len(n);
	num = n;
	ptr = malloc(sizeof(char) * (size + 1));
	if (ptr == NULL)
		return (NULL);
	if (n < 0)
	{
		ptr[0] = '-';
		num = -num;
	}
	if (n == 0)
	{
		ptr[0] = '0';
	}
	ptr[size--] = '\0';
	while (num)
	{
		ptr[size--] = (num % 10) + 48;
		num /= 10;
	}
	return (ptr);
}

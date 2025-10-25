/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfathi <bfathi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 21:14:46 by bfathi            #+#    #+#             */
/*   Updated: 2025/10/22 01:53:54 by bfathi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	to_find;

	to_find = (unsigned char)c;
	s = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if (s[i] == to_find)
			return ((void *)&s[i]);
		i++;
	}
	return (0);
}

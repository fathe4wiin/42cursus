/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfathi <bfathi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 18:42:17 by fathe4wiin        #+#    #+#             */
/*   Updated: 2025/09/21 18:24:13 by bfathi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *str, int c, size_t n)
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
			return (&s[i]);
		i++;
	}
	return (0);
}

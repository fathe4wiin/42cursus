/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfathi <bfathi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 21:14:56 by bfathi            #+#    #+#             */
/*   Updated: 2025/10/24 05:59:35 by bfathi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	if (d == s && n)
		return (dest);
	while (n--)
		*d++ = *s++;
	return (dest);
}

int main()
{
	char *str = "Hello World!";
	char *s = ft_memcpy(str, str, 0);
	printf("%s\n", s);
}
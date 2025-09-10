/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fathe4wiin <fathe4wiin@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 18:42:17 by fathe4wiin        #+#    #+#             */
/*   Updated: 2025/09/10 18:51:55 by fathe4wiin       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(void *str, int c, size_t n)
{
	size_t i;
	char *s;
	char d;

	d = (char)c;
	s = (char *)str;

	i = 0;
	while (s[i])
	{
		if (s[i] == d)
			return (&str[i]);
		i++;
	}
	return (0);
}

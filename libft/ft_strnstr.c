/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfathi <bfathi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 18:57:57 by fathe4wiin        #+#    #+#             */
/*   Updated: 2025/09/26 02:51:25 by bfathi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp_(char *s1, char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

char	*ft_strnstr(char *str, char *to_find, size_t n)
{
	size_t	to_find_len;
	size_t	i;

	to_find_len = ft_strlen(to_find);
	if (to_find_len == 0)
		return ((char *)str);
	if (to_find_len > n)
		return (0);
	i = 0;
	while (*str && i < n)
	{
		if (ft_strncmp_(str + i, to_find, to_find_len) == 0)
			return (str + i);
		i++;
	}
	return (0);
}

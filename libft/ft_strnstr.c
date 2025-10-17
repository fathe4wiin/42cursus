/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfathi <bfathi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 18:57:57 by fathe4wiin        #+#    #+#             */
/*   Updated: 2025/10/17 16:51:06 by bfathi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t n)
{
	size_t	to_find_len;
	size_t	i;
	size_t	str_len;
	
	str_len = ft_strlen(str);
	(void)str_len;
	to_find_len = ft_strlen(to_find);
	if (to_find_len == 0)
		return ((char *)str);
	if (to_find_len > n)
		return (0);
	i = 0;
	while (*(str + i) && i + to_find_len - 1 < n)
	{
		if (ft_strncmp(str + i, to_find, to_find_len) == 0)
			return (str + i);
		i++;
	}
	return (0);
}

// int main()
// {
// 	char *res = ft_strnstr("Trouverez vous Charly dans cette phrase?", "Charly",
// 			18);
// 			} 


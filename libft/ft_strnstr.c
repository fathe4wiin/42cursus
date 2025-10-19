/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfathi <bfathi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 18:57:57 by fathe4wiin        #+#    #+#             */
/*   Updated: 2025/10/19 23:03:41 by bfathi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <strings.h>

char	*ft_strnstr(char *str, char *to_find, size_t n)
{
	size_t	to_find_len;
	size_t	i;

	to_find_len = ft_strlen(to_find);
	if (to_find_len == 0)
		return ((char *)str);
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

// 	//char *dss = ft_strnstr(NULL, "fake", 3);
// 	char *res = ft_strnstr(NULL, "fake", 5);

// }
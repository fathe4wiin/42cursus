/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfathi <bfathi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 21:16:45 by bfathi            #+#    #+#             */
/*   Updated: 2025/10/22 02:20:35 by bfathi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strchr(const char *str, int c)
{
	int	i;

	c = (unsigned char)c;
	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return ((char *)&str[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)&str[i]);
	return (0);
}

// int	main(void)
// {
// 	printf("%s", ft_strchr("teste", 'e'));
// }

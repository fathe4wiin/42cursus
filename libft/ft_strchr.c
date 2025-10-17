/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfathi <bfathi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 20:36:52 by bfathi            #+#    #+#             */
/*   Updated: 2025/10/16 15:39:39 by bfathi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strchr(char *str, int c)
{
	int	i;

	c = (unsigned char)c;
	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (&str[i]);
		i++;
	}
	if (c == '\0')
		return (&str[i]);
	return (0);
}

// int	main(void)
// {
// 	printf("%s", ft_strchr("teste", 'e'));
// }

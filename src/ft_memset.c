/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfathi <bfathi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 21:15:06 by bfathi            #+#    #+#             */
/*   Updated: 2025/10/22 02:24:49 by bfathi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)ptr;
	i = 0;
	while (i < num)
	{
		*p = (unsigned char)value;
		i++;
		p++;
	}
	return (ptr);
}

// int main(void)clear
// {
// 	int i = 0;
// 	int *pt = &i;

// 	unsigned char *ptr = (unsigned char *)pt;

// 	ptr[0] = 0;
// 	// ptr[2] = 1;
// 	// ptr[3] = 1;
// 	ptr[0] = ptr[0] + 1;
// 	ptr[0] = ptr[0] + 2;
// 	ptr[0] = ptr[0] + 4;
// 	ptr[0] = ptr[0] + 64;
// 	ptr[0] = ptr[0] + 128;
// 	// ptr[0] = 199;
// 	ptr[1] = 250;
// 	ptr[2] = 255;
// 	ptr[3] = 255;

// 	// ft_memset(&ptr[0], 214, 1);
// 	// ft_memset(&ptr[1], 255, 1);
// 	// ft_memset(&ptr[2], 255, 1);
// 	// ft_memset(&ptr[3], 255, 1);

// 	printf("%d\n", i);

// }

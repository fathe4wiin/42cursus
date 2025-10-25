/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfathi <bfathi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 21:15:00 by bfathi            #+#    #+#             */
/*   Updated: 2025/10/24 05:51:11 by bfathi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = -1;
	if (d == s)
		return (d);
	if (d < s)
	{
		while (++i < n)
			d[i] = s[i];
	}
	else
	{
		while (n-- > 0)
			d[n] = s[n];
	}
	return (dest);
}

// int main(void)
// {
// 	char a[10] = "eaaaa";
// 	char * p = (char *) ft_memmove(((void*)0), ((void*)0), 5);
// 	// char * p = (char *)memmove(a, a, 2);
// 	printf("%s \n %s \n ", a , p);
// }

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	buf1[20] = "HelloWorld";
// 	char	buf2[20] = "HelloWorld";
// 	char	buf3[20] = "HelloWorld";

// 	// Case 1: dest < src, non-overlapping
// 	printf("Case 1:\n");
// 	ft_memmove(buf1, buf1 + 5, 5); // copy "World" to start
// 	printf("Result: %s\n", buf1);
// 	// Case 2: dest > src, overlapping
// 	printf("Case 2:\n");
// 	ft_memmove(buf2 + 2, buf2, 8); // copy "HelloWor" into overlap
// 	printf("Result: %s\n", buf2);
// 	// Case 3: dest = src (same pointer)
// 	printf("Case 3:\n");
// 	ft_memmove(buf3, buf3, 10); // no actual movement
// 	printf("Result: %s\n", buf3);
// 	return (0);
// }

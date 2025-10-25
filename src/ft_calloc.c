/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfathi <bfathi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 21:12:54 by bfathi            #+#    #+#             */
/*   Updated: 2025/10/22 22:26:31 by bfathi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*res;

	if (nmemb != 0 && size > SIZE_MAX / nmemb)
		return (NULL);
	res = malloc(nmemb * size);
	if (!res && (nmemb * size != 0))
		return (NULL);
	ft_bzero(res, nmemb * size);
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fathe4wiin <fathe4wiin@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 16:16:09 by fathe4wiin        #+#    #+#             */
/*   Updated: 2025/09/13 16:23:22 by fathe4wiin       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		i;
	int		len;

	i = 0;
	while (s1[i])
		i++;
	len = i;
	i = 0;
	while (s2[i])
		i++;
	len += i;
	i = 0;
	res = malloc(len + 1);
	if (!res)
		return (0);
	len = 0;
	while (s1[i])
		res[len++] = s1[i++];
	i = 0;
	while (s2[i])
		res[len++] = s2[i++];
	res[len] = '\0';
	return (res);
}

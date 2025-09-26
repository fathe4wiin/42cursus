/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfathi <bfathi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 16:25:02 by fathe4wiin        #+#    #+#             */
/*   Updated: 2025/09/23 20:24:38 by bfathi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	chr_in_str(char c, const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		i;
	int		len;

	i = 0;
	while (s1[i])
	{
		if (!chr_in_str(s1[i], set))
			len++;
		i++;
	}
	res = malloc(len + 1);
	if (!res)
		return (0);
	i = 0;
	len = 0;
	while (s1[i])
	{
		if (!chr_in_str(s1[i], set))
			res[len++] = s1[i];
		i++;
	}
	res[len] = '\0';
	return (res);
}

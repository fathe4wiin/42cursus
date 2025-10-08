/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fathe4wiin <fathe4wiin@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 18:57:57 by fathe4wiin        #+#    #+#             */
/*   Updated: 2025/10/06 17:23:27 by fathe4wiin       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}
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
	while (*str && i + to_find_len - 1 < n)
	{
		if (ft_strncmp_(str + i, to_find, to_find_len) == 0)
			return (str + i);
		i++;
	}
	return (0);
}

// int main()
// {
// 	char *res = ft_strnstr("Trouverez vous Charly dans cette phrase?", "Charly", 18);
// }

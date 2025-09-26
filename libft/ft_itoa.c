/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfathi <bfathi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 15:27:49 by fathe4wiin        #+#    #+#             */
/*   Updated: 2025/09/23 20:19:19 by bfathi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*fill_str(int nb, int i, int neg)
{
	char	*res;

	res = malloc((i + 1) * sizeof(char));
	if (nb == 0)
	{
		res = malloc(2 * sizeof(char));
		res[0] = '0';
		res[1] = '\0';
		return (res);
	}
	res[i] = '\0';
	i--;
	if (neg == -1)
		res[0] = '-';
	while (nb)
	{
		res[i] = (nb % 10) + '0';
		nb /= 10;
		i--;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	int		nb;
	int		len;
	char	*res;
	int		neg;

	len = 0;
	neg = 1;
	if (n < 0)
	{
		neg = -1;
		len++;
		n *= -1;
	}
	nb = n;
	while (nb)
	{
		nb /= 10;
		len++;
	}
	res = fill_str(n, len, neg);
	return (res);
}

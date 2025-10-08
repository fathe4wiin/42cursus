/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fathe4wiin <fathe4wiin@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 15:27:49 by fathe4wiin        #+#    #+#             */
/*   Updated: 2025/09/28 16:40:30 by fathe4wiin       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*fill_str(unsigned int nb, int i, int neg)
{
	char	*res;

	if (nb == 0)
	{
		res = malloc(2 * sizeof(char));
		res[0] = '0';
		res[1] = '\0';
		return (res);
	}
	res = malloc((i + 1) * sizeof(char));
	if (!res)
		return (NULL);
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
	int				nb;
	int				len;
	unsigned int	nbr;
	int				neg;

	len = 0;
	neg = 1;
	if (n < 0)
	{
		neg = -1;
		len++;
		nbr = (unsigned)(-n);
	}
	else
		nbr = (unsigned)n;
	nb = nbr;
	while (nb)
	{
		nb /= 10;
		len++;
	}
	return (fill_str(nbr, len, neg));
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%s", ft_itoa(-2147483648));
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfathi <bfathi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 18:38:16 by fathe4wiin        #+#    #+#             */
/*   Updated: 2025/09/21 18:31:46 by bfathi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;

	if (n < 0)
	{
		write(fd, "-", 1);
		nb = (unsigned)(-n);
	}
	else
		nb = (unsigned)n;
	if (nb >= 10)
		ft_putnbr_fd(nb / 10, fd);
	ft_putchar_fd((nb % 10) + '0', fd);
}

// #include <stdio.h>
// #include <unistd.h>

// // Declare the functions from your source file
// void ft_putnbr_fd(int n, int fd);

// int main(void)
// {
//     ft_putnbr_fd(-5486, 1);
//     write(1, "\n", 1);


//     return 0;
// } 

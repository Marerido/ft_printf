/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:01:13 by tunglaub          #+#    #+#             */
/*   Updated: 2024/05/06 16:01:31 by tunglaub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putnbr_fd(int n, int fd)
{
	char		digit;
	long int	nb;
	int			length;

	nb = n;
	length = 0;
	if (nb < 0)
	{
		length += write(fd, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
	{
		length += ft_putnbr_fd(nb / 10, fd);
	}
	digit = '0' + nb % 10;
	length += write(fd, &digit, 1);
	return (length);
}

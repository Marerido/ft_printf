/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_adress.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:02:12 by tunglaub          #+#    #+#             */
/*   Updated: 2024/05/06 16:02:24 by tunglaub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nb_length(unsigned long long n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n /= 16;
	}
	return (len);
}

static void	ft_write_adress(unsigned long long n)
{
	if (n > 15)
	{
		ft_write_adress(n / 16);
		ft_write_adress(n % 16);
	}
	else
	{
		if (n < 10)
			ft_putchar_fd('0' + n, 1);
		else if (n > 9)
			ft_putchar_fd((n - 10) + 'a', 1);
	}
}

int	ft_print_adress(unsigned long long n)
{
	int	len;

	len = 0;
	len += ft_putstr_fd("0x", 1);
	if (n == 0)
		len += ft_putchar_fd('0', 1);
	else
	{
		ft_write_adress(n);
		len = nb_length(n);
	}
	return (len);
}
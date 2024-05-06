/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uns_decimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:01:51 by tunglaub          #+#    #+#             */
/*   Updated: 2024/05/06 16:01:59 by tunglaub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_uns_decimal(unsigned int n)
{
	int		length;
	char	*decimal;

	decimal = "0123456789";
	length = 0;
	if (n > 9)
		length += ft_uns_decimal(n / 10);
	ft_putchar_fd(decimal[n % 10], 1);
	return (length + 1);
}

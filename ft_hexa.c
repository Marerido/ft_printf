/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:59:55 by tunglaub          #+#    #+#             */
/*   Updated: 2024/05/06 16:00:00 by tunglaub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_hexa(unsigned int n, char c)
{
	char	*hexadecimal;
	int		length;

	if (c == 'x')
		hexadecimal = "0123456789abcdef";
	else
		hexadecimal = "0123456789ABCDEF";
	length = 0;
	if (n > 15)
		length += ft_hexa(n / 16, c);
	ft_putchar_fd(hexadecimal[n % 16], 1);
	return (length + 1);
}

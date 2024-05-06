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

int	ft_write_adress(void *c)
{
	unsigned long	n;
	int				wr;

	n = (unsigned long)c;
	wr = write(1, "0x", 2);
	wr += ft_hexa(n, 'x');
	return (wr);
}

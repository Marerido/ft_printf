/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:02:41 by tunglaub          #+#    #+#             */
/*   Updated: 2024/05/07 10:36:40 by tunglaub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stddef.h>

int		ft_hexa(unsigned int n, char c);
int		ft_print_adress(unsigned long long n);
int		ft_uns_decimal(unsigned int n);
int		ft_putchar_fd(char c, int fd);
int		ft_putnbr_fd(int n, int fd);
int		ft_putstr_fd(char *s, int fd);
char	*ft_strchr(const char *str, int c);
size_t	ft_strlen(const char *str);
#endif

/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 02:53:24 by root              #+#    #+#             */
/*   Updated: 2024/04/30 20:50:30 by root             ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stddef.h>

int	ft_hexa(unsigned long n, char c);
int	ft_write_adress(void *c);
int	ft_uns_decimal(unsigned int n);
int	ft_putchar_fd(char c, int fd);
int     ft_putnbr_fd(int n, int fd);
int	ft_putstr_fd(char *s, int fd);
char	*ft_strchr(const char *str, int c);
size_t	ft_strlen(const char *str);
#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerisen <szerisen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 20:25:17 by szerisen          #+#    #+#             */
/*   Updated: 2023/01/08 20:25:17 by szerisen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_fd(int n, int fd, size_t *ret, size_t *i)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd, ret);
		n = -n;
	}
	if (n == -2147483648)
	{
		ft_putchar_fd('2', fd, ret);
		n = 147483648;
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd, ret, i);
	ft_putchar_fd(n % 10 + 48, fd, ret);
	if (n < 10)
		*i = *i + 1;
}

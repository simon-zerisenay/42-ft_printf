/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerisen <szerisen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 20:25:23 by szerisen          #+#    #+#             */
/*   Updated: 2023/01/08 20:25:23 by szerisen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr(long long unsigned n, size_t *ret, int check, size_t *i)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (!check)
	{
		ft_putchar_fd('0', 1, ret);
		ft_putchar_fd('x', 1, ret);
		check++;
	}
	if (n > 15)
		ft_putptr(n / 16, ret, check, i);
	ft_putchar_fd(hex[n % 16], 1, ret);
	if (n < 16)
		*i = *i + 1;
}

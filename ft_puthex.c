/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerisen <szerisen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 20:25:12 by szerisen          #+#    #+#             */
/*   Updated: 2023/01/08 20:25:12 by szerisen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int n, char c, size_t *ret, size_t *i)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (c == 'X')
		hex = "0123456789ABCDEF";
	if (n > 15)
		ft_puthex(n / 16, c, ret, i);
	ft_putchar_fd(hex[n % 16], 1, ret);
	if (n < 16)
		*i = *i + 1;
}

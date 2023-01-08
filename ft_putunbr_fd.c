/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerisen <szerisen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 20:25:45 by szerisen          #+#    #+#             */
/*   Updated: 2023/01/08 20:25:45 by szerisen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunbr_fd(unsigned int n, int fd, size_t *ret, size_t *i)
{
	if (n > 9)
		ft_putunbr_fd(n / 10, fd, ret, i);
	ft_putchar_fd(n % 10 + 48, fd, ret);
	if (n < 10)
		*i = *i + 1;
}

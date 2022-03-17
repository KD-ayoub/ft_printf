/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akadi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 11:22:12 by akadi             #+#    #+#             */
/*   Updated: 2021/12/27 15:31:24 by akadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	l;

	l = 0;
	if (n == -2147483648)
	{
		l += ft_putchar('-');
		l += ft_putchar('2');
		l += ft_putnbr(147483648);
	}
	else if (n < 0)
	{
		n = n * (-1);
		l += ft_putchar('-');
		l += ft_putnbr(n);
	}
	else if (n > 9)
	{
		l += ft_putnbr((n / 10));
		l += ft_putnbr((n % 10));
	}
	else
		l += ft_putchar((n + '0'));
	return (l);
}

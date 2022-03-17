/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akadi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 11:22:12 by akadi             #+#    #+#             */
/*   Updated: 2021/12/27 15:31:59 by akadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putunsigned(unsigned int n)
{
	int	l;

	l = 0;
	if (n > 9)
	{
		l += ft_putunsigned((n / 10));
		l += ft_putunsigned((n % 10));
	}
	else
		l += ft_putchar((n + '0'));
	return (l);
}
